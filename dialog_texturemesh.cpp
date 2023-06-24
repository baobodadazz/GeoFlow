#include "dialog_texturemesh.h"
#include "ui_dialog_texturemesh.h"

Dialog_texturemesh::Dialog_texturemesh(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_texturemesh)
{
    ui->setupUi(this);
}

Dialog_texturemesh::~Dialog_texturemesh()
{
    delete ui;
}

void Dialog_texturemesh::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)//三角网模型文件路径
{

}

void Dialog_texturemesh::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)//纹理输出目录
{

}

void Dialog_texturemesh::on_comboBox_activated(const QString &arg1)//格式
{

}

void Dialog_texturemesh::on_pushButton_browseInputDir_clicked()//三角网模型文件路径浏览按钮
{

}

void Dialog_texturemesh::on_pushButton_browseOutputDir_clicked()//纹理输出路径浏览按钮
{

}

void Dialog_texturemesh::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_texturemesh::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
