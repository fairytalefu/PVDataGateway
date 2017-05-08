#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "historytable.h"
#include "ui_historytable.h"
#include <QtWebKit/QtWebKit>
#include <QUrl>
using namespace cv;
//VideoCapture capture(0);
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->PvStationID,SIGNAL(currentIndexChanged(int)),this,SLOT(PvStationIDcomboxInfo(int)));
	connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(comboxInfo(int)));
    QUrl url("file:///home/pi/QtProject/PVDataGateway/BaiduMap.html");
//    //ui->webView->load(QUrl("https://app.ubidots.com/ubi/getchart/page/1UFtHjNgDXZ1xTsdaendgI7QD8k"));
//    //ui->webView->load(url);
//    //ui->webView->show();
    ui->webView->load(url);
    ui->webView->show();
    //connect(ui->Map,SIGNAL(),this,SLOT())
    // System Log Create model
    time = QDateTime::currentDateTime();
    pDateTimer = new QTimer(this);
    pDateTimer->setInterval(2000);
    connect(pDateTimer,SIGNAL(timeout()),this,SLOT(onDateTimeOut()));
    pDateTimer->start();
    timeStr = time.toString("yy-MM-dd hh:mm:ss ddd");
    //ui->statusBar->setStyleSheet("QLabel { color : black; }");
    ui->statusBar->showMessage(timeStr);
    model = new QStringListModel(this);
    line = "串口未打开，系统未启动";
    status = "未连接";
    //System status
    ui->SerialStatus->setStyleSheet("QLabel { background-color : red; color : blue; }");
    ui->SystemStatus->setText(status);
    ui->SystemConnectStatus->setText(status);
    ui->SystemConnectStatus->setStyleSheet("color: red");
    ui->SystemStatus->setStyleSheet("color: red");
    stringList.append(line);
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);

    //DataItemCombox
    DatacomboxItemList.append(QString("kk"));
    qDebug()<<DatacomboxItemList.at(0)<<endl;
    /******************************倒计时********************************/
    m_count = 0;
    flag = 1;
    curItem = 1;
    //设置定时时间
    connect(ui->timeInterval_combox,SIGNAL(currentIndexChanged(int)),this,SLOT(timeInterval_comboxInfo(int)));
    // 设置能显示的位数
    //ui->lcdNumber->setDigitCount(25);
    // 设置显示外观
   // ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat);
    // 设置样式
    //ui->lcdNumber_2->setStyleSheet("border: 1px solid black; color: black; background: orange;");
    displayLcd = QString("01:00");
    //设置定时器
    pTimer = new QTimer(this);
    // 设置定时间隔
    pTimer->setInterval(1000);
    //定时1s更新LCDNumber的内容
    connect(pTimer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
    //初始化显示
   // ui->lcdNumber->display(displayLcd);
    ui->lcdNumber_2->display(displayLcd);
    //当倒计时结束后，触发处理事务
    connect(this,SIGNAL(TimeOutSignal()),this,SLOT(TimeOutEvent()));
    /***************************************************************/
    /***********************pythonProcess**************************/
    pythonProcess = new QProcess(this);
    connect(pythonProcess, SIGNAL(started()), this, SLOT(processStarted()));
    connect(pythonProcess,SIGNAL(readyReadStandardOutput()),this,SLOT(readyReadStandardOutput()));
    connect(pythonProcess, SIGNAL(finished(int)), this, SLOT(processFinished()));
    /*************************************video capture****************/
    freshFrame = new QTimer(this);
    freshFrame->setInterval(50);

    connect(freshFrame,SIGNAL(timeout()),this,SLOT(OnVideoTimeOut()));
    capture.set(CV_CAP_PROP_FRAME_WIDTH, 1920);
    capture.set(CV_CAP_PROP_FRAME_HEIGHT, 1080);
    capture.open(0);
v
}
void MainWindow::readyReadStandardOutput()
{
    stringList.append(pythonProcess->readAllStandardOutput());
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);

}
void MainWindow::onDateTimeOut()
{
    time = QDateTime::currentDateTime();
    timeStr = time.toString("yyyy-MM-dd HH:mm:ss ddd");
    //ui->statusBar->setStyleSheet("QLabel { color : black; }");
    ui->statusBar->showMessage(timeStr);
}
void MainWindow::onTimeOut()
{
    QString m_Counter,m_CurItem ;
    m_CurItem = QString::number(curItem,10);
    if(curItem == 0)
        flag = 0;
    if(curItem)
    {
        counter--;
        m_count++;
        if(counter < 10)
            m_Counter = QString::number(0,10)+QString::number(counter,10);
        else
            m_Counter = QString::number(counter,10);
        if((m_count/60))
        {
            curItem--;
            counter=60;
            m_count = 0;
            flag = 0;
        }
        displayLcd = QString("0")+m_CurItem+QString(":")+m_Counter;
        ui->lcdNumber_2->display(displayLcd);
    }
    else
    {

        if(!flag &&(counter == 0))
        {
            pTimer->stop();
            emit TimeOutSignal();
        }
        else
        {
            counter--;
            if(counter < 10)
                m_Counter = QString::number(0,10)+QString::number(counter,10);
            else
                m_Counter = QString::number(counter,10);
            displayLcd = QString("0")+m_CurItem+QString(":")+m_Counter;
            ui->lcdNumber_2->display(displayLcd);
        }
    }
}
void MainWindow::timeInterval_comboxInfo(int index)
{
    if(ui->timeInterval_combox->itemText(index) == QString("1 min"))
    {
        curItem = 0;
        counter = 60;
    }
    else if(ui->timeInterval_combox->itemText(index) == QString("2 min"))
    {
        curItem = 1;
        counter = 60;
    }
    else
    {
        curItem = 4;
        counter = 60;
    }
    displayLcd = QString("0")+QString::number(curItem+1,10)+QString(":00");
    ui->lcdNumber_2->display(displayLcd);
    pTimer->start();
   // program = "/home/pi/pTest.sh";
    program = "/home/pi/dataPerceptron/backApp.sh";
    //QStringList argument = "/home/pi/test.py";
    pythonProcess->start(program);
}
void MainWindow::TimeOutEvent()
{
    line = "倒计时完毕，继续倒计时";
    stringList.append(line);
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);

}
void MainWindow::processStarted()
{
    line = "开始上传数据";
    stringList.append(line);
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);
}

void MainWindow::processFinished()
{
    line = "上传数据成功";
    stringList.append(line);
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);
}
bool MainWindow::createConnection()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("DataGateway");
    db.setUserName("root");
    db.setPassword("111");
    if (!db.open())
    {
        qDebug() << "Database error occurred";
        return false;
    }
    return true;
}
int MainWindow::searchData()
{
    if (!createConnection())
    {
            qDebug() << "Not connected!";
            return 1;
    }
    else
    {

        qDebug() << "Connected!";
        query.exec("SELECT Status FROM PVData");
        while (query.next())
        {
            QString Status1 = query.value(0).toString();
            qDebug() << "Status1:" << Status1;
        }

        return 0;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OpenSerial_clicked()
{

    ui->SerialStatus->setStyleSheet("QLabel { background-color : green; color : blue; }");
    status = "连接成功";
    ui->SystemConnectStatus->setText(status);
    ui->SystemConnectStatus->setStyleSheet("color: green");
    line = "连接到mysql成功，连接到Ubdots成功，系统成功启动";
    stringList.append(line);
    model->setStringList(stringList);
    ui->SystemLog1->setModel(model);
    ConnectToMysqlDatabase();   
}

void MainWindow::on_CloseSerial_clicked()
{


   line = "串口未打开，系统连接关闭";
   status = "连接关闭";
   ui->SerialStatus->setStyleSheet("QLabel { background-color : red; color : blue; }");
   ui->SystemConnectStatus->setText(status);
   ui->SystemConnectStatus->setStyleSheet("color: red");
   stringList.append(line);
   model->setStringList(stringList);
   // 关闭定时器
   pTimer->stop();
   //pDateTimer->stop();
   pythonProcess->kill();
}

void MainWindow::on_HistoryTable_clicked()
{
    HistoryTable  *historyTable = new HistoryTable (this);
   // historyTable->ui->lineEdit->setText("hello");
  //  connect(historyTable, &HistoryTable::ValueChanged2, this, &MainWindow::setValue);

    sqlmodel = new QSqlQueryModel();

    QSqlQuery* qry = new QSqlQuery(db);

    qry->prepare("SELECT * FROM PVData");

    qry->exec();
    sqlmodel->setQuery(*qry);

    historyTable->ui->tableView->setModel(sqlmodel);

    qDebug() << sqlmodel->rowCount();

    historyTable->show();
}


//void MainWindow::setValue(QString message)
//{
//    ui->label_13->setText(message);
//}
void MainWindow::PvStationIDcomboxInfo(int index)
{
    QSqlQuery* qry = new QSqlQuery(db);
    QString Items = ui->PvStationID->itemText(index);
    int area = Items.toInt();
    qDebug() << "change value Area" << endl;
    qry->prepare("update PVData set Area = :Area");
    qry->bindValue(":Area",area);//这一句只能放在prepare后面，不然没有更新数据到数据库里面
    qry->exec();

}
void MainWindow::comboxInfo(int index)
{
    //Temp
   // QMessageBox::information(this, "Item Selection", ui->comboBox->itemText(index), QMessageBox::Ok);
    // 图形视图
    sqlmodel = new QSqlQueryModel();
    QSqlQuery* qry = new QSqlQuery(db);
    QString Items = ui->comboBox->itemText(index);
    ui->tableView->setColumnWidth(0,300);
    ui->tableView->setColumnWidth(1,200);
    if ( Items == QString("Temp"))
    {
        qry->prepare("SELECT Date,Temp FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);

        ui->tableView->setModel(sqlmodel);
    }
    else if ( Items == QString("Irr"))
    {
        qry->prepare("SELECT Date,Irr FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);
        ui->tableView->setModel(sqlmodel);
    }
    else if ( Items == QString("Imp"))
    {
        qry->prepare("SELECT Date,Imp FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);
        ui->tableView->setModel(sqlmodel);
    }
    else if ( Items == QString("Vmp"))
    {
        qry->prepare("SELECT Date,Vmp FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);
        ui->tableView->setModel(sqlmodel);
    }
    else if ( Items == QString("Power"))
    {
        qry->prepare("SELECT Date,Power FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);
        ui->tableView->setModel(sqlmodel);
    }
    else
    {
        qry->prepare("SELECT Date,Temp FROM PVData");

        qry->exec();
        sqlmodel->setQuery(*qry);
        ui->tableView->setModel(sqlmodel);
    }
}

void MainWindow::on_TestDataBase_clicked()
{
    if (!createConnection())
    {
        qDebug() << "Not connected!";
    }
    else
    {
        qDebug() << "Connected!";

        QSqlQuery query;
        query.exec("SELECT name FROM student");

        while (query.next())
        {
            QString name = query.value(0).toString();
            qDebug() << "name:" << name;
        }
     }
}
void MainWindow::detectPVstatus(int curStatus)
{
    qDebug() << "curStatus" << curStatus << endl;
    if(1 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: green");ui->SystemStatus->setText("正常");}
    else if(2 == curStatus)
    {  ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("开路1");}
    else if( 3 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("开路2");}
    else if( 4 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("短路1");}
    else if( 5 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("短路2");}
    else if( 6 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("阴影1");}
    else if( 7 == curStatus)
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("阴影2");}
    else
    { ui->SystemStatus->setStyleSheet("color: red");ui->SystemStatus->setText("unknow");}
}
void MainWindow::ConnectToMysqlDatabase()
{
    if (!createConnection())
    {
        qDebug() << "Not connected!";
    }
    else
    {
        qDebug() << "Connected!";


        QSqlQuery  qry;

        qry.exec("SELECT * FROM PVData");

        while(qry.next())
        {
       // QString Lat = sqlmodel->index(1,1);
//            qDebug() << "Lat:" << qry.value(1).toString();
//            qDebug() << "Lng:" << qry.value(2).toString();
            Temp = qry.value(3).toString();
            Irr = qry.value(4).toString();
            Imp = qry.value(5).toString();
            Vmp = qry.value(6).toString();
            Power = qry.value(7).toString();
            Lng = qry.value(1).toString();
            Lat = qry.value(2).toString();
            Status = qry.value(8).toString();//not toInt()
        }
        //qDebug() << "Lng" << Lng.toFloat(0) << "Lat" << Lat.toFloat(0) << endl;
        QWebFrame *frame = ui->webView->page()->mainFrame();
        QString method = QString("theLocation(\"%1\",\"%2\")").arg(Lng,Lat);//调用js的SetCity进行目标城市设置
        frame->evaluateJavaScript(method);
        ui->Temp->setText(Temp);
        ui->Irr->setText(Irr);
        ui->Imp->setText(Imp);
        ui->Vmp->setText(Vmp);
        ui->Power->setText(Power);
        ui->Lng->setText(Lng);
        ui->Lat->setText(Lat);
        float s = Status.toFloat();
        qDebug() << "Status" << Status << endl;
        detectPVstatus(s);
     }
}

void MainWindow::on_Fresh_clicked()
{
    QSqlQuery  qry;

    qry.exec("SELECT * FROM PVData");

    while(qry.next())
    {
   // QString Lat = sqlmodel->index(1,1);
//            qDebug() << "Lat:" << qry.value(1).toString();
//            qDebug() << "Lng:" << qry.value(2).toString();
        Temp = qry.value(3).toString();
        Irr = qry.value(4).toString();
        Imp = qry.value(5).toString();
        Vmp = qry.value(6).toString();
        Power = qry.value(7).toString();
        Lng = qry.value(1).toString();
        Lat = qry.value(2).toString();
        Status = qry.value(8).toString();

    }
    //qDebug() << "Lng" << Lng.toFloat(0) << "Lat" << Lat.toFloat(0) << endl;
    QWebFrame *frame = ui->webView->page()->mainFrame();
    QString method = QString("theLocation(\"%1\",\"%2\")").arg(Lng,Lat);//调用js的SetCity进行目标城市设置
    frame->evaluateJavaScript(method);
    ui->Temp->setText(Temp);
    ui->Irr->setText(Irr);
    ui->Imp->setText(Imp);
    ui->Vmp->setText(Vmp);

    ui->Power->setText(Power);
    ui->Lng->setText(Lng);
    ui->Lat->setText(Lat);
    float s = Status.toFloat();
    qDebug() << "Status" << Status << endl;
    detectPVstatus(s);
}
/******************************************video*********************************/
QImage MainWindow::cvMat2QImage(const cv::Mat& mat)
{
    // 8-bits unsigned, NO. OF CHANNELS = 1
    if(mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for(int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar *pSrc = mat.data;
        for(int row = 0; row < mat.rows; row ++)
        {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    // 8-bits unsigned, NO. OF CHANNELS = 3
    else if(mat.type() == CV_8UC3)
    {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if(mat.type() == CV_8UC4)
    {
        qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}
void MainWindow::OnVideoTimeOut()
{
    if(capture.isOpened())
    {
          // qDebug()<<"open camera ok!"<<endl;
           capture >> frame;
            if (frame.empty())
            { //判断图像是否载入
               qDebug()<<"not frame captured"<<endl;
            }

            image = cvMat2QImage(frame);
            ui->video_label->setPixmap(QPixmap::fromImage(image));
            ui->video_label->show();
           // qDebug()<<"convert frame capture ok!"<<endl;
    }
}

void MainWindow::on_video_start_clicked()
{
     freshFrame->start();
}

void MainWindow::on_video_stop_clicked()
{
     freshFrame->stop();
     capture.release();
}
