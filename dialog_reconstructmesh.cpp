#include "dialog_reconstructmesh.h"
#include "ui_dialog_reconstructmesh.h"

Dialog_reconstructmesh::Dialog_reconstructmesh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_reconstructmesh)
{
    ui->setupUi(this);
}

Dialog_reconstructmesh::~Dialog_reconstructmesh()
{
    delete ui;
}

void Dialog_reconstructmesh::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)//密集点云文件目录
{

}

void Dialog_reconstructmesh::on_pushButton_browseInputDir_clicked()//密集点云文件目录按钮
{

}

void Dialog_reconstructmesh::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)//三角模型输出按钮
{

}

void Dialog_reconstructmesh::on_pushButton_browseOutputDir_clicked()//三角模型输出按钮
{

}

void Dialog_reconstructmesh::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_reconstructmesh::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
