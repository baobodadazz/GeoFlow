#include "quicreator.h"
#include "dialog_automake.h"
#include "dialog_camset.h"
#include "dialog_coordinatemapping.h"
#include "dialog_densifypointcloudcreate.h"
#include "dialog_featurematch.h"
#include "dialog_pointinfo.h"
#include "dialog_reconstructmesh.h"
#include "dialog_sfmpointcloudcreate.h"
#include "dialog_texturemesh.h"
#include "qfile.h"
#include "qtranslator.h"
#include "ui_quicreator.h"
#include "ui_dialog_automake.h"
#include "ui_dialog_camset.h"
#include "ui_dialog_coordinatemapping.h"
#include "ui_dialog_densifypointcloudcreate.h"
#include "ui_dialog_featurematch.h"
#include "ui_dialog_pointinfo.h"
#include "ui_dialog_reconstructmesh.h"
#include "ui_dialog_sfmpointcloudcreate.h"
#include "ui_dialog_texturemesh.h"
#include <Qprocess>

//extern std::string GLOBAL_DIR;
QUICreator::QUICreator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QUICreator)
{
    ui->setupUi(this);
    this->initForm();
    this->showMaximized();
}

QUICreator::~QUICreator()
{
    delete ui;
}

/*
    Dialog_automake atmk;
    Dialog_CamSet cmst;
    Dialog_CoordinateMapping crdm;
    Dialog_densifypointcloudcreate dpcc;
    Dialog_featurematch ftmt;
    Dialog_pointinfo ptnf;
    Dialog_reconstructmesh rcmh;
    Dialog_sfmpointcloudcreate spcc;
    Dialog_texturemesh ttmh;
*/
void QUICreator::on_action_CamSet_triggered(){cmst.exec();}
void QUICreator::on_action_CoordinateMapping_triggered(){crdm.exec();}
void QUICreator::on_action_AutoMake_triggered(){atmk.exec();}
void QUICreator::on_action_SFMPointCloudCreate_triggered(){spcc.exec();}
void QUICreator::on_action_DensifyPointCloudCreate_triggered(){dpcc.exec();}
void QUICreator::on_action_FeatureMatch_triggered(){ftmt.exec();}
void QUICreator::on_action_ReconstructMesh_triggered(){rcmh.exec();}
void QUICreator::on_action_TextureMesh_triggered(){ttmh.exec();}

void QUICreator::initForm()
{
    this->initTableWidget();
    this->initTreeWidget();
    this->initListWidget();
    this->initOther();
    this->initStyle();
    this->initTranslator();
    ui->tabWidget->setCurrentIndex(0);
}

void QUICreator::initTableWidget()
{
    //设置列数和列宽
    int width = qApp->screens()[0]->availableGeometry().width() - 120;
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setColumnWidth(0, width * 0.06);
    ui->tableWidget->setColumnWidth(1, width * 0.10);
    ui->tableWidget->setColumnWidth(2, width * 0.06);
    ui->tableWidget->setColumnWidth(3, width * 0.10);
    ui->tableWidget->setColumnWidth(4, width * 0.15);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(25);

    QStringList headText;
    headText << "1" << "1" << "1" << "1" << "1";
    ui->tableWidget->setHorizontalHeaderLabels(headText);
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    //设置行高
    ui->tableWidget->setRowCount(1);

    for (int i = 0; i < 1; i++) {
        ui->tableWidget->setRowHeight(i, 24);

        QTableWidgetItem *itemDeviceID = new QTableWidgetItem(QString::number(i + 1));
        QTableWidgetItem *itemDeviceName = new QTableWidgetItem(QString("1").arg(i + 1));
        QTableWidgetItem *itemDeviceAddr = new QTableWidgetItem(QString::number(i + 1));
        QTableWidgetItem *itemContent = new QTableWidgetItem("1");
        QTableWidgetItem *itemTime = new QTableWidgetItem(QDateTime::currentDateTime().toString("1"));

        ui->tableWidget->setItem(i, 0, itemDeviceID);
        ui->tableWidget->setItem(i, 1, itemDeviceName);
        ui->tableWidget->setItem(i, 2, itemDeviceAddr);
        ui->tableWidget->setItem(i, 3, itemContent);
        ui->tableWidget->setItem(i, 4, itemTime);
    }
}

void QUICreator::initTreeWidget()
{
    ui->treeWidget->clear();
    ui->treeWidget->setHeaderLabel(" 树状列表控件");

    QTreeWidgetItem *group1 = new QTreeWidgetItem(ui->treeWidget);
    group1->setText(0, "父元素1");
    group1->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    group1->setCheckState(0, Qt::PartiallyChecked);

    QTreeWidgetItem *subItem11 = new QTreeWidgetItem(group1);
    subItem11->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    subItem11->setText(0, "子元素1");
    subItem11->setCheckState(0, Qt::Checked);

    QTreeWidgetItem *subItem12 = new QTreeWidgetItem(group1);
    subItem12->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    subItem12->setText(0, "子元素2");
    subItem12->setCheckState(0, Qt::Unchecked);

    QTreeWidgetItem *subItem13 = new QTreeWidgetItem(group1);
    subItem13->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    subItem13->setText(0, "子元素3");
    subItem13->setCheckState(0, Qt::Unchecked);

    QTreeWidgetItem *group2 = new QTreeWidgetItem(ui->treeWidget);
    group2->setText(0, "父元素2");
    group2->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    group2->setCheckState(0, Qt::Unchecked);

    QTreeWidgetItem *subItem21 = new QTreeWidgetItem(group2);
    subItem21->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    subItem21->setText(0, "子元素1");
    subItem21->setCheckState(0, Qt::Unchecked);

    QTreeWidgetItem *subItem211 = new QTreeWidgetItem(subItem21);
    subItem211->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    subItem211->setText(0, "子子元素1");
    subItem211->setCheckState(0, Qt::Unchecked);

    ui->treeWidget->expandAll();
}

void QUICreator::initListWidget()
{
    QStringList items;
    for (int i = 1; i <= 30; i++) {
        items << QString("元素%1").arg(i);
    }

    ui->listWidget->addItems(items);
    ui->cbox1->addItems(items);
    ui->cbox2->addItems(items);
}

void QUICreator::initOther()
{
    ui->rbtn1->setChecked(true);
    ui->ck2->setChecked(true);
    ui->ck3->setCheckState(Qt::PartiallyChecked);
    ui->horizontalSlider->setValue(88);

    ui->tab9->setStyleSheet("QPushButton{font:20pt;}");
    ui->widgetVideo->setStyleSheet("QLabel{font:20pt;}");

    ui->widgetLeft->setProperty("nav", "left");
    ui->widgetBottom->setProperty("form", "bottom");
    ui->widgetTop->setProperty("nav", "top");
    ui->widgetVideo->setProperty("video", true);

    QList<QLabel *> labChs = ui->widgetVideo->findChildren<QLabel *>();
    foreach (QLabel *lab, labChs) {
        lab->setFocusPolicy(Qt::StrongFocus);
    }    
}

void QUICreator::initStyle()
{
    //加载样式表
    QFile file(":/qss/psblack.css");
    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        QString paletteColor = qss.mid(20, 7);
        qApp->setPalette(QPalette(QColor(paletteColor)));
        qApp->setStyleSheet(qss);
        file.close();
    }
}

void QUICreator::initTranslator()
{
    //加载鼠标右键菜单翻译文件
    QTranslator *translator1 = new QTranslator(qApp);
    translator1->load(":/image/qt_zh_CN.qm");
    qApp->installTranslator(translator1);

    //加载富文本框鼠标右键菜单翻译文件
    QTranslator *translator2 = new QTranslator(qApp);
    translator2->load(":/image/widgets.qm");
    qApp->installTranslator(translator2);
}

void QUICreator::on_btnCamPlace_clicked()//渲染相机位置
{
    //mvg-内参分析
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_SfMInit_ImageListing -i " + DIR + "\\pic -d SenWidDB.txt -o " + DIR + "\\output";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnPointCloudRender_clicked()//点云渲染
{
    //mvg-计算特征
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_ComputeFeatures -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output -m SIFT -p NORMAL";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnWebRender_clicked()//网络渲染
{

    //mvg-计算匹配
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_ComputeMatches -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output\\featurePointmatch.bin";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnTextureCloudRender_clicked()//纹理渲染
{
    //mvg-过滤器匹配
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_GeometricFilter -i " + DIR + "\\output\\sfm_data.json  -m " + DIR + "\\output\\featurePointmatch.bin  -o " + DIR + "\\output\\matches_filtered.bin";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnRenderPointWeight_clicked()//渲染点大小
{
    //mvg-增量重构
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\incrementalSFM -s INCREMENTAL";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_SpinRenderPointWeight_valueChanged(double arg1)//渲染点大小spinbox
{
    ui->progressBar_2->setValue(1);
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnRenderPointNum_clicked()//渲染点数量
{
    ui->progressBar_2->setValue(1);
    //mvg-着色结构
    command = "openMVG_main_ComputeSfM_DataColor -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -o  " + DIR + "\\output\\globalSFM\\colorized.ply";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_spinRenderPointNum_valueChanged(int arg1)//渲染点数量spinbox
{

}



void QUICreator::on_btnCamVisionUp_clicked()//相机视角+
{
    ui->progressBar_2->setValue(1);
    //mvg-彩色鲁棒三角剖分
    command = "openMVG_main_ComputeSfM_DataColor -i " + DIR + "\\output\\globalSFM\\robust.bin -o " + DIR + "\\output\\globalSFM\\robust_colorized.ply";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnCamVisionDown_clicked()//相机视角-
{
    ui->progressBar_2->setValue(1);
    //mvg-导出到openMVS
    command = "openMVG_main_openMVG2openMVS -i " + DIR + "\\output\\globalSFM\\sfm_data.bin -o " + DIR + "\\output\\globalSFM\\scene.mvs -d " + DIR + "\\output\\globalSFM\\images";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnOutputSet_clicked()//输出设置
{
    ui->progressBar_2->setValue(1);
    //mvs-稠密点云重建
    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "DensifyPointCloud -w " + DIR_MVS + " scene.mvs";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_btnSTART_clicked()//运行
{
    //if(GLOBAL_DIR == "")
      //  return;
    this->showMinimized();
    //mvg-内参分析
    command = "openMVG_main_SfMInit_ImageListing -i " + DIR + "\\pic -d SenWidDB.txt -o " + DIR + "\\output";
    system(command.c_str());
    ui->progressBar_2->setValue(1);
    //mvg-计算特征
    command = "openMVG_main_ComputeFeatures -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output -m SIFT -p NORMAL";
    system(command.c_str());
    ui->progressBar_2->setValue(3);
    //mvg-计算匹配
    command = "openMVG_main_ComputeMatches -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output\\featurePointmatch.bin";
    system(command.c_str());
    ui->progressBar_2->setValue(4);
    //mvg-过滤器匹配
    command = "openMVG_main_GeometricFilter -i " + DIR + "\\output\\sfm_data.json  -m " + DIR + "\\output\\featurePointmatch.bin  -o " + DIR + "\\output\\matches_filtered.bin";
    system(command.c_str());
    ui->progressBar_2->setValue(6);
    //mvg-增量重构
    command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\incrementalSFM -s INCREMENTAL";
    system(command.c_str());
    ui->progressBar_2->setValue(11);
    //mvg-全局重建
    command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\globalSFM -s GLOBAL";
    system(command.c_str());
    ui->progressBar_2->setValue(16);
    //mvg-着色结构
    command = "openMVG_main_ComputeSfM_DataColor -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -o  " + DIR + "\\output\\globalSFM\\colorized.ply";
    system(command.c_str());
    ui->progressBar_2->setValue(25);
    //mvg-已知姿势的结构
    command = "openMVG_main_ComputeStructureFromKnownPoses -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -m  " + DIR + "\\output -o  " + DIR + "\\output\\globalSFM\\robust.bin -f  " + DIR + "\\output\\matches_filtered.bin -d on_off";
    system(command.c_str());
    ui->progressBar_2->setValue(32);
    //mvg-彩色鲁棒三角剖分
    command = "openMVG_main_ComputeSfM_DataColor -i " + DIR + "\\output\\globalSFM\\robust.bin -o " + DIR + "\\output\\globalSFM\\robust_colorized.ply";
    system(command.c_str());
    ui->progressBar_2->setValue(44);
    //mvg-导出到openMVS
    command = "openMVG_main_openMVG2openMVS -i " + DIR + "\\output\\globalSFM\\sfm_data.bin -o " + DIR + "\\output\\globalSFM\\scene.mvs -d " + DIR + "\\output\\globalSFM\\images";
    system(command.c_str());
    ui->progressBar_2->setValue(50);
    //mvs-稠密点云重建
    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "DensifyPointCloud -w " + DIR_MVS + " scene.mvs";
    system(command.c_str());
    ui->progressBar_2->setValue(56);
    //mvs-网格重建
    command = "ReconstructMesh -w " + DIR_MVS + " scene_dense.mvs";
    system(command.c_str());
    ui->progressBar_2->setValue(75);
    //mvs-网格细化
    command = "RefineMesh -w " + DIR_MVS + " scene_dense_mesh.mvs --max-face-area 16";
    system(command.c_str());
    ui->progressBar_2->setValue(87);
    //mvs-纹理贴图
    command = "TextureMesh -w " + DIR_MVS + " scene_dense_mesh_refine.mvs";
    system(command.c_str());
    ui->progressBar_2->setValue(100);

    //mvg-打开
    command = "Viewer " + DIR_MVS + "\\scene_dense_mesh_refine_texture.mvs";
    system(command.c_str());

    this->showMaximized();
}

void QUICreator::on_pushButton_2_clicked()
{
    //mvg-全局重建
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\globalSFM -s GLOBAL";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_pushButton_clicked()
{
    //mvg-已知姿势的结构
    ui->progressBar_2->setValue(1);
    command = "openMVG_main_ComputeStructureFromKnownPoses -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -m  " + DIR + "\\output -o  " + DIR + "\\output\\globalSFM\\robust.bin -f  " + DIR + "\\output\\matches_filtered.bin -d on_off";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_pushButton_3_clicked()
{
    //mvs-网格重建
    ui->progressBar_2->setValue(1);
    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "ReconstructMesh -w " + DIR_MVS + " scene_dense.mvs";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_pushButton_4_clicked()
{
    //mvs-网格细化
    ui->progressBar_2->setValue(1);
    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "RefineMesh -w " + DIR_MVS + " scene_dense_mesh.mvs --max-face-area 16";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);

}

void QUICreator::on_pushButton_6_clicked()
{
    //mvg-打开

    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "Viewer " + DIR_MVS + "\\scene_dense_mesh_refine_texture.mvs";

    WinExec(command.c_str(), SW_HIDE);

    QThread::msleep(2000);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"GLFW30", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();

}

void QUICreator::on_pushButton_5_clicked()
{
    //mvs-纹理贴图
    ui->progressBar_2->setValue(1);
    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "TextureMesh -w " + DIR_MVS + " scene_dense_mesh_refine.mvs";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();
    ui->progressBar_2->setValue(100);
}

void QUICreator::on_pushButton_7_clicked()
{
    QFileDialog *fileDialog = new QFileDialog(this);
    fileDialog->setFileMode(QFileDialog::Directory);
    fileDialog->exec();
    auto selectDir = fileDialog->selectedFiles();

    ui->lineEdit_2->setText(selectDir.at(0));
    DIR = selectDir.at(0).toStdString();
}

//菜单栏-关闭
void QUICreator::on_action_Close_triggered()
{
    QThread::msleep(100);//阻塞延时50ms
    this->close();
}

//菜单栏-保存
void QUICreator::on_action_Save_triggered()
{
    ui->progressBar_2->setValue(0);
    for(int i = 1; i <= 100; i++)
    {
        QThread::msleep(i);
        ui->progressBar_2->setValue(i);
    }

}

void QUICreator::on_action_export_ply_triggered()
{
    QMessageBox msgBox;

    msgBox.information(NULL,  "重要信息",  "将打开模型，请确认无误后按E导出，否则按ESC退出！！", QMessageBox::Yes, QMessageBox::Yes);
    //msgBox.exec();

    DIR_MVS = DIR + "\\output\\globalSFM";
    command = "Viewer -i " + DIR_MVS + "\\scene_dense_mesh_refine_texture.mvs";
    WinExec(command.c_str(), SW_SHOW);
    QThread::msleep(100);
    //ConsoleWindowClass
    WId wid = (WId)FindWindow(L"ConsoleWindowClass", NULL);

    QWindow *m_window = QWindow::fromWinId(wid);
    m_window->setFlags(m_window->flags() | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    QWidget *m_widget = QWidget::createWindowContainer(m_window, ui->m_sub_widget);
    m_widget->setMinimumSize(ui->m_sub_widget->width(), ui->m_sub_widget->height());
    m_widget->show();


}
