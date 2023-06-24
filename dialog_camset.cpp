/*
添加相机传感器参数
*/

#include "dialog_camset.h"
#include "ui_dialog_camset.h"

Dialog_CamSet::Dialog_CamSet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_CamSet)
{
    ui->setupUi(this);
}

Dialog_CamSet::~Dialog_CamSet()
{
    delete ui;
}

void Dialog_CamSet::on_lineEdit_model_cursorPositionChanged(int arg1, int arg2)//型号
{

}

void Dialog_CamSet::on_lineEdit_focus_cursorPositionChanged(int arg1, int arg2)//焦距
{

}

void Dialog_CamSet::on_lineEdit_fov_cursorPositionChanged(int arg1, int arg2)//视角
{

}

void Dialog_CamSet::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_CamSet::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
