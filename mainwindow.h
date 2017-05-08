#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QStringListModel>
#include <QStackedWidget>
#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QWidget>
#include <QDebug>
#include <QGraphicsScene>
#include <QMessageBox>
#include <QWebFrame>
#include <QProcess>
#include <QDebug>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_OpenSerial_clicked();//连接按钮
    void on_CloseSerial_clicked();//关闭按钮
    void on_HistoryTable_clicked();//历史数据按钮
    void on_TestDataBase_clicked();//测试的按钮
    void on_Fresh_clicked();//刷新按钮

    void on_video_start_clicked();

    void on_video_stop_clicked();

signals:
    void TimeOutSignal();//倒计时结束的信号
public slots:
    void PvStationIDcomboxInfo(int index);//数据查询的cpmbox
    void comboxInfo(int index);//数据查询的cpmbox
    void timeInterval_comboxInfo(int index);//倒计时的cpmbox
    void onTimeOut();//更新倒计时lcdNumber的定时器
    void onDateTimeOut();//更新当前时间的定时器
    void TimeOutEvent();//倒计时结束的槽函数
    void processStarted();//python后台线程启动时触发的槽函数
    void processFinished();//python后台线程结束时触发的槽函数
    void readyReadStandardOutput();//捕获python后台线程标准输出的槽函数
     void OnVideoTimeOut();
public:
    bool createConnection();//mysql 连接
    int  searchData();//查询数据函数
    void ConnectToMysqlDatabase();
    QImage cvMat2QImage(const cv::Mat& mat);
    void detectPVstatus(int curStatus);
public:
    Ui::MainWindow *ui;
    QString message ;
    // Create model
    QStringListModel *model;

    QStringList stringList;
    QString line ;
    QString status ;
    QSqlDatabase db;
    QSqlQuery query;
    QSqlQueryModel* sqlmodel;
    QStringList DatacomboxItemList;
    QGraphicsScene *scene;
    QSqlQuery* PVinfoQry;

    QString Temp;
    QString Irr;
    QString Imp;
    QString Vmp;
    QString Power;
    QString Lat;
    QString Lng;
    QString Status;
    QTimer *pTimer;
    QTimer *pDateTimer;
    QString displayLcd;
    int curItem;
    int counter;
    int m_count;
    int flag;
    QString timeStr;
    QDateTime time;
    QProcess *pythonProcess;
    QString program;
private:
    QTimer *freshFrame;
    cv::Mat frame;
    QImage image;
    cv::VideoCapture capture;
};

#endif // MAINWINDOW_H
