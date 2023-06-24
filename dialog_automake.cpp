#include "dialog_automake.h"
#include "ui_dialog_automake.h"
#include <windows.h>
#include "quicreator.h"
#include <global.h>

Dialog_automake::Dialog_automake(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_automake)
{
    setWindowTitle("自动三维重建");//怎么回事呢？
    ui->setupUi(this);
}

Dialog_automake::~Dialog_automake()
{
    delete ui;
}

void Dialog_automake::on_comboBox_describer_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_quality_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_upright_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_forcecompute_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_geometricmodel_activated(const QString &arg1)
{

}

void Dialog_automake::on_lineEdit_distanceRatio_cursorPositionChanged(int arg1, int arg2)
{

}

void Dialog_automake::on_comboBox_forcematch_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_triangulationMethod_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_resectionMethod_activated(const QString &arg1)
{

}

void Dialog_automake::on_comboBox_activated(const QString &arg1)
{

}

void Dialog_automake::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)
{

}

void Dialog_automake::on_pushButton_browseInputDir_clicked()
{

}

void Dialog_automake::on_lineEdit_kMatrix_cursorPositionChanged(int arg1, int arg2)
{

}

void Dialog_automake::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)
{

}

void Dialog_automake::on_pushButton_browseOutputDir_clicked()
{

}

/*void Dialog_automake::on_buttonBox_accepted()
{
    this->close();
}*/

void Dialog_automake::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
    //std::string s = ui->lineEdit_inputDir->text().toStdString();
    //Global::setGD(s);

/*
    std::string DIR = "F:\\GFTest";

    //mvg-内参分析
    std::string command = "openMVG_main_SfMInit_ImageListing -i " + DIR + "\\pic -d SenWidDB.txt -o " + DIR + "\\output";
    system(command.c_str());
    //mvg-计算特征
    command = "openMVG_main_ComputeFeatures -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output -m SIFT -p NORMAL";
    system(command.c_str());
    //mvg-计算匹配
	command = "openMVG_main_ComputeMatches -i " + DIR + "\\output\\sfm_data.json -o " + DIR + "\\output\\featurePointmatch.bin";
    system(command.c_str());
    //mvg-过滤器匹配
	command = "openMVG_main_GeometricFilter -i " + DIR + "\\output\\sfm_data.json  -m " + DIR + "\\output\\featurePointmatch.bin  -o " + DIR + "\\output\\matches_filtered.bin";
    system(command.c_str());
    //mvg-增量重构
	command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\incrementalSFM -s INCREMENTAL";
    system(command.c_str());
    //mvg-全局重建
	command = "openMVG_main_SfM -i " + DIR + "\\output\\sfm_data.json -m " + DIR + "\\output -M matches_filtered.bin -o " + DIR + "\\output\\globalSFM -s GLOBAL";
    system(command.c_str());
    //mvg-着色结构
	command = "openMVG_main_ComputeSfM_DataColor -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -o  " + DIR + "\\output\\globalSFM\\colorized.ply";
    system(command.c_str());
    //mvg-已知姿势的结构
	command = "openMVG_main_ComputeStructureFromKnownPoses -i  " + DIR + "\\output\\globalSFM\\sfm_data.bin -m  " + DIR + "\\output -o  " + DIR + "\\output\\globalSFM\\robust.bin -f  " + DIR + "\\output\\matches_filtered.bin -d on_off";
    system(command.c_str());
    //mvg-彩色鲁棒三角剖分
	command = "openMVG_main_ComputeSfM_DataColor -i " + DIR + "\\output\\globalSFM\\robust.bin -o " + DIR + "\\output\\globalSFM\\robust_colorized.ply";
    system(command.c_str());
    //mvg-导出到openMVS
	command = "openMVG_main_openMVG2openMVS -i " + DIR + "\\output\\globalSFM\\sfm_data.bin -o " + DIR + "\\output\\globalSFM\\scene.mvs -d " + DIR + "\\output\\globalSFM\\images";
    system(command.c_str());
    //mvs-稠密点云重建
    std::string DIR_MVS = DIR + "\\output\\globalSFM";
	command = "DensifyPointCloud -w " + DIR_MVS + " scene.mvs";
    system(command.c_str());
    //mvs-网格重建
	command = "ReconstructMesh -w " + DIR_MVS + " scene_dense.mvs";
    system(command.c_str());
    //mvs-网格细化
	command = "RefineMesh -w " + DIR_MVS + " scene_dense_mesh.mvs --max-face-area 16";
    system(command.c_str());
    //mvs-纹理贴图
	command = "TextureMesh -w " + DIR_MVS + " scene_dense_mesh_refine.mvs";
    system(command.c_str());
	
    //mvg-打开
	command = "Viewer " + DIR_MVS + "\\scene_dense_mesh_refine_texture.mvs";
    system(command.c_str());
	
    this->close();
    */
}

void Dialog_automake::on_btn_CANCEL_clicked()//取消
{
    this->close();
}

void Dialog_automake::on_lineEdit_inputDir_returnPressed()
{

}
