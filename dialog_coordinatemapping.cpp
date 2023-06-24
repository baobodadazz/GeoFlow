/*
坐标映射
*/

#include "dialog_coordinatemapping.h"
#include "ui_dialog_coordinatemapping.h"

Dialog_CoordinateMapping::Dialog_CoordinateMapping(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_CoordinateMapping)
{
    ui->setupUi(this);
}

Dialog_CoordinateMapping::~Dialog_CoordinateMapping()
{
    delete ui;
}

void Dialog_CoordinateMapping::on_lineEdit_imageDir_cursorPositionChanged(int arg1, int arg2)//SFM重建目录
{

}

void Dialog_CoordinateMapping::on_toolButton_imageDir_clicked()//浏览
{

}

void Dialog_CoordinateMapping::on_lineEdit_dsmDir_cursorPositionChanged(int arg1, int arg2)//DSM文件路径
{

}

void Dialog_CoordinateMapping::on_toolButton_dsmDir_clicked()//浏览
{

}

void Dialog_CoordinateMapping::on_listView_images_activated(const QModelIndex &index)//影像数据
{

}

void Dialog_CoordinateMapping::on_listView_picked_points_activated(const QModelIndex &index)//已选中的点集
{

}



void Dialog_CoordinateMapping::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_CoordinateMapping::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
