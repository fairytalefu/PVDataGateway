/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QFrame *frame;
    QLabel *SystemStatus;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *label_26;
    QComboBox *PvStationID;
    QLineEdit *Temp;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *Irr;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *Vmp;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_9;
    QLineEdit *Imp;
    QLineEdit *Power;
    QLabel *label_8;
    QTabWidget *tabWidget;
    QWidget *Dataview;
    QTableView *tableView;
    QComboBox *comboBox;
    QWidget *Map;
    QWebView *webView;
    QLabel *label;
    QLabel *label_14;
    QLineEdit *Lng;
    QLineEdit *Lat;
    QWidget *Video;
    QLabel *video_label;
    QPushButton *video_start;
    QPushButton *video_stop;
    QWidget *SystemLog;
    QListView *SystemLog1;
    QWidget *widget_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *HistoryTable;
    QPushButton *Fresh;
    QPushButton *TestDataBase;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QPushButton *OpenSerial;
    QLabel *SerialStatus;
    QPushButton *CloseSerial;
    QLabel *SystemConnectStatus;
    QComboBox *timeInterval_combox;
    QLabel *label_15;
    QLCDNumber *lcdNumber_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(794, 482);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(20, 0, 771, 460));
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setFrameShape(QFrame::StyledPanel);
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(22);
        groupBox_2->setFont(font1);
        groupBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        groupBox_2->setLocale(QLocale(QLocale::Chinese, QLocale::China));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 281, 241));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 10, 271, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        SystemStatus = new QLabel(frame);
        SystemStatus->setObjectName(QStringLiteral("SystemStatus"));
        SystemStatus->setGeometry(QRect(110, 200, 71, 21));
        sizePolicy.setHeightForWidth(SystemStatus->sizePolicy().hasHeightForWidth());
        SystemStatus->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(12);
        SystemStatus->setFont(font2);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 200, 105, 23));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setPointSize(16);
        label_12->setFont(font3);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 158, 20, 23));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Ubuntu Mono"));
        font4.setPointSize(20);
        label_10->setFont(font4);
        label_26 = new QLabel(frame);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(1, 11, 161, 23));
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);
        label_26->setFont(font3);
        PvStationID = new QComboBox(frame);
        PvStationID->setObjectName(QStringLiteral("PvStationID"));
        PvStationID->setGeometry(QRect(196, 11, 44, 24));
        sizePolicy.setHeightForWidth(PvStationID->sizePolicy().hasHeightForWidth());
        PvStationID->setSizePolicy(sizePolicy);
        Temp = new QLineEdit(frame);
        Temp->setObjectName(QStringLiteral("Temp"));
        Temp->setGeometry(QRect(57, 33, 141, 31));
        sizePolicy.setHeightForWidth(Temp->sizePolicy().hasHeightForWidth());
        Temp->setSizePolicy(sizePolicy);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 41, 30, 23));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font4);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(1, 41, 40, 23));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setFamily(QStringLiteral("Ubuntu Mono"));
        font5.setPointSize(16);
        label_2->setFont(font5);
        Irr = new QLineEdit(frame);
        Irr->setObjectName(QStringLiteral("Irr"));
        Irr->setGeometry(QRect(57, 62, 141, 31));
        sizePolicy.setHeightForWidth(Irr->sizePolicy().hasHeightForWidth());
        Irr->setSizePolicy(sizePolicy);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(1, 70, 30, 23));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font5);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(200, 99, 20, 24));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font4);
        Vmp = new QLineEdit(frame);
        Vmp->setObjectName(QStringLiteral("Vmp"));
        Vmp->setGeometry(QRect(57, 92, 141, 31));
        sizePolicy.setHeightForWidth(Vmp->sizePolicy().hasHeightForWidth());
        Vmp->setSizePolicy(sizePolicy);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(1, 99, 30, 23));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font5);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 70, 57, 23));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font4);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(1, 160, 50, 23));
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);
        label_11->setFont(font5);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(1, 129, 30, 23));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setFont(font5);
        Imp = new QLineEdit(frame);
        Imp->setObjectName(QStringLiteral("Imp"));
        Imp->setGeometry(QRect(57, 121, 141, 31));
        sizePolicy.setHeightForWidth(Imp->sizePolicy().hasHeightForWidth());
        Imp->setSizePolicy(sizePolicy);
        Power = new QLineEdit(frame);
        Power->setObjectName(QStringLiteral("Power"));
        Power->setGeometry(QRect(57, 148, 141, 41));
        sizePolicy.setHeightForWidth(Power->sizePolicy().hasHeightForWidth());
        Power->setSizePolicy(sizePolicy);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 129, 20, 23));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setFont(font4);
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(290, 40, 491, 381));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setFont(font3);
        Dataview = new QWidget();
        Dataview->setObjectName(QStringLiteral("Dataview"));
        tableView = new QTableView(Dataview);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(12, 38, 461, 291));
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        comboBox = new QComboBox(Dataview);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 0, 75, 28));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setPointSize(14);
        comboBox->setFont(font6);
        tabWidget->addTab(Dataview, QString());
        Map = new QWidget();
        Map->setObjectName(QStringLiteral("Map"));
        webView = new QWebView(Map);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(0, 0, 481, 311));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        label = new QLabel(Map);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 320, 41, 40));
        label_14 = new QLabel(Map);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(220, 320, 51, 40));
        Lng = new QLineEdit(Map);
        Lng->setObjectName(QStringLiteral("Lng"));
        Lng->setGeometry(QRect(60, 320, 151, 31));
        Lng->setFont(font6);
        Lat = new QLineEdit(Map);
        Lat->setObjectName(QStringLiteral("Lat"));
        Lat->setGeometry(QRect(280, 320, 161, 31));
        Lat->setFont(font6);
        tabWidget->addTab(Map, QString());
        Video = new QWidget();
        Video->setObjectName(QStringLiteral("Video"));
        video_label = new QLabel(Video);
        video_label->setObjectName(QStringLiteral("video_label"));
        video_label->setGeometry(QRect(10, 0, 461, 311));
        video_start = new QPushButton(Video);
        video_start->setObjectName(QStringLiteral("video_start"));
        video_start->setGeometry(QRect(60, 320, 99, 27));
        video_stop = new QPushButton(Video);
        video_stop->setObjectName(QStringLiteral("video_stop"));
        video_stop->setGeometry(QRect(340, 320, 99, 27));
        tabWidget->addTab(Video, QString());
        SystemLog = new QWidget();
        SystemLog->setObjectName(QStringLiteral("SystemLog"));
        SystemLog1 = new QListView(SystemLog);
        SystemLog1->setObjectName(QStringLiteral("SystemLog1"));
        SystemLog1->setGeometry(QRect(20, 30, 431, 261));
        sizePolicy.setHeightForWidth(SystemLog1->sizePolicy().hasHeightForWidth());
        SystemLog1->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QStringLiteral("Ubuntu Mono"));
        font7.setPointSize(8);
        SystemLog1->setFont(font7);
        tabWidget->addTab(SystemLog, QString());
        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 270, 281, 151));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        layoutWidget1 = new QWidget(widget_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 269, 40));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        HistoryTable = new QPushButton(layoutWidget1);
        HistoryTable->setObjectName(QStringLiteral("HistoryTable"));
        sizePolicy.setHeightForWidth(HistoryTable->sizePolicy().hasHeightForWidth());
        HistoryTable->setSizePolicy(sizePolicy);
        HistoryTable->setFont(font2);

        gridLayout_2->addWidget(HistoryTable, 0, 0, 1, 1);

        Fresh = new QPushButton(layoutWidget1);
        Fresh->setObjectName(QStringLiteral("Fresh"));
        sizePolicy.setHeightForWidth(Fresh->sizePolicy().hasHeightForWidth());
        Fresh->setSizePolicy(sizePolicy);
        Fresh->setFont(font2);

        gridLayout_2->addWidget(Fresh, 0, 1, 1, 1);

        TestDataBase = new QPushButton(layoutWidget1);
        TestDataBase->setObjectName(QStringLiteral("TestDataBase"));
        TestDataBase->setFont(font2);

        gridLayout_2->addWidget(TestDataBase, 0, 2, 1, 1);

        layoutWidget2 = new QWidget(widget_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 70, 251, 78));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        OpenSerial = new QPushButton(layoutWidget2);
        OpenSerial->setObjectName(QStringLiteral("OpenSerial"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(OpenSerial->sizePolicy().hasHeightForWidth());
        OpenSerial->setSizePolicy(sizePolicy1);
        OpenSerial->setFont(font2);

        gridLayout->addWidget(OpenSerial, 0, 0, 1, 1);

        SerialStatus = new QLabel(layoutWidget2);
        SerialStatus->setObjectName(QStringLiteral("SerialStatus"));
        sizePolicy1.setHeightForWidth(SerialStatus->sizePolicy().hasHeightForWidth());
        SerialStatus->setSizePolicy(sizePolicy1);
        SerialStatus->setFont(font2);

        gridLayout->addWidget(SerialStatus, 0, 1, 1, 1);

        CloseSerial = new QPushButton(layoutWidget2);
        CloseSerial->setObjectName(QStringLiteral("CloseSerial"));
        sizePolicy1.setHeightForWidth(CloseSerial->sizePolicy().hasHeightForWidth());
        CloseSerial->setSizePolicy(sizePolicy1);
        CloseSerial->setFont(font2);

        gridLayout->addWidget(CloseSerial, 1, 0, 1, 1);

        SystemConnectStatus = new QLabel(layoutWidget2);
        SystemConnectStatus->setObjectName(QStringLiteral("SystemConnectStatus"));
        sizePolicy1.setHeightForWidth(SystemConnectStatus->sizePolicy().hasHeightForWidth());
        SystemConnectStatus->setSizePolicy(sizePolicy1);
        SystemConnectStatus->setFont(font2);

        gridLayout->addWidget(SystemConnectStatus, 1, 1, 1, 1);

        timeInterval_combox = new QComboBox(widget_2);
        timeInterval_combox->setObjectName(QStringLiteral("timeInterval_combox"));
        timeInterval_combox->setGeometry(QRect(106, 0, 81, 31));
        timeInterval_combox->setFont(font2);
        label_15 = new QLabel(widget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 0, 51, 31));
        label_15->setFont(font2);
        lcdNumber_2 = new QLCDNumber(widget_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(197, 0, 80, 31));
        splitter->addWidget(groupBox_2);
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QFont font8;
        font8.setFamily(QStringLiteral("Ubuntu Mono"));
        font8.setPointSize(10);
        statusBar->setFont(font8);
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(tabWidget, tableView);
        QWidget::setTabOrder(tableView, comboBox);
        QWidget::setTabOrder(comboBox, Temp);
        QWidget::setTabOrder(Temp, Irr);
        QWidget::setTabOrder(Irr, Vmp);
        QWidget::setTabOrder(Vmp, Imp);
        QWidget::setTabOrder(Imp, Power);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\205\211\344\274\217\347\263\273\347\273\237\345\267\245\344\275\234\345\217\202\346\225\260\345\256\236\346\227\266\347\233\221\346\265\213\347\263\273\347\273\237\344\271\213\346\225\260\346\215\256\347\275\221\345\205\263", 0));
        SystemStatus->setText(QApplication::translate("MainWindow", "\345\267\245\344\275\234\347\212\266\346\200\201", 0));
        label_12->setText(QApplication::translate("MainWindow", "\345\267\245\344\275\234\347\212\266\346\200\201\357\274\232", 0));
        label_10->setText(QApplication::translate("MainWindow", "W", 0));
        label_26->setText(QApplication::translate("MainWindow", "PVStation ID", 0));
        PvStationID->clear();
        PvStationID->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "4", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\302\260C", 0));
        label_2->setText(QApplication::translate("MainWindow", "Temp", 0));
        label_5->setText(QApplication::translate("MainWindow", "Irr", 0));
        label_6->setText(QApplication::translate("MainWindow", "V", 0));
        label_7->setText(QApplication::translate("MainWindow", "Vmp", 0));
        label_4->setText(QApplication::translate("MainWindow", "W/\343\216\241", 0));
        label_11->setText(QApplication::translate("MainWindow", "Power", 0));
        label_9->setText(QApplication::translate("MainWindow", "Imp", 0));
        label_8->setText(QApplication::translate("MainWindow", "A", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Temp", 0)
         << QApplication::translate("MainWindow", "Irr", 0)
         << QApplication::translate("MainWindow", "Vmp", 0)
         << QApplication::translate("MainWindow", "Imp", 0)
         << QApplication::translate("MainWindow", "Power", 0)
        );
        tabWidget->setTabText(tabWidget->indexOf(Dataview), QApplication::translate("MainWindow", "DataView", 0));
        label->setText(QApplication::translate("MainWindow", "Lng:", 0));
        label_14->setText(QApplication::translate("MainWindow", "Lat:", 0));
        tabWidget->setTabText(tabWidget->indexOf(Map), QApplication::translate("MainWindow", "Map", 0));
        video_label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        video_start->setText(QApplication::translate("MainWindow", "start", 0));
        video_stop->setText(QApplication::translate("MainWindow", "stop", 0));
        tabWidget->setTabText(tabWidget->indexOf(Video), QApplication::translate("MainWindow", "Video", 0));
        tabWidget->setTabText(tabWidget->indexOf(SystemLog), QApplication::translate("MainWindow", "SystemLog", 0));
        HistoryTable->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", 0));
        Fresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        TestDataBase->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225", 0));
        OpenSerial->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        SerialStatus->setText(QString());
        CloseSerial->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        SystemConnectStatus->setText(QString());
        timeInterval_combox->clear();
        timeInterval_combox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1 min", 0)
         << QApplication::translate("MainWindow", "2 min", 0)
         << QApplication::translate("MainWindow", "5 min", 0)
        );
        label_15->setText(QApplication::translate("MainWindow", " \351\227\264\351\232\224", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
