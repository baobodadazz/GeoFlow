/*
密集点云生成
*/

#include "dialog_densifypointcloudcreate.h"
#include "ui_dialog_densifypointcloudcreate.h"

Dialog_densifypointcloudcreate::Dialog_densifypointcloudcreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_densifypointcloudcreate)
{
    ui->setupUi(this);
}

Dialog_densifypointcloudcreate::~Dialog_densifypointcloudcreate()
{
    delete ui;
}

void Dialog_densifypointcloudcreate::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)//三维重建结果目录
{

}

void Dialog_densifypointcloudcreate::on_pushButton_browseInputDir_clicked()//浏览
{

}

void Dialog_densifypointcloudcreate::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)//点云输出目录
{

}

void Dialog_densifypointcloudcreate::on_pushButton_browseOutputDir_clicked()//浏览
{

}

void Dialog_densifypointcloudcreate::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_densifypointcloudcreate::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
