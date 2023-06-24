#include "dialog_featurematch.h"
#include "ui_dialog_featurematch.h"

Dialog_featurematch::Dialog_featurematch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_featurematch)
{
    ui->setupUi(this);
}

Dialog_featurematch::~Dialog_featurematch()
{
    delete ui;
}

void Dialog_featurematch::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)//图片文件夹
{

}

void Dialog_featurematch::on_pushButton_browseInputDir_clicked()//浏览
{

}

void Dialog_featurematch::on_lineEdit_kMatrix_cursorPositionChanged(int arg1, int arg2)//相机本征矩阵
{

}

void Dialog_featurematch::on_comboBox_describer_activated(const QString &arg1)//算子
{

}

void Dialog_featurematch::on_comboBox_quality_activated(const QString &arg1)//质量
{

}

void Dialog_featurematch::on_comboBox_upright_activated(const QString &arg1)//向量
{

}

void Dialog_featurematch::on_comboBox_forcecompute_activated(const QString &arg1)//暴力计算
{

}

void Dialog_featurematch::on_comboBox_geometricmodel_activated(const QString &arg1)//集合模型
{

}

void Dialog_featurematch::on_lineEdit_distanceRatio_cursorPositionChanged(int arg1, int arg2)//比例
{

}

void Dialog_featurematch::on_comboBox_forcematch_activated(const QString &arg1)//暴力匹配
{

}

void Dialog_featurematch::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)//路径
{

}

void Dialog_featurematch::on_pushButton_browseOutputDir_clicked()//路径浏览
{

}

void Dialog_featurematch::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_featurematch::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
