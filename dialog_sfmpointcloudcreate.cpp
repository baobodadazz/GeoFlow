#include "dialog_sfmpointcloudcreate.h"
#include "ui_dialog_sfmpointcloudcreate.h"

Dialog_sfmpointcloudcreate::Dialog_sfmpointcloudcreate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_sfmpointcloudcreate)
{
    ui->setupUi(this);
}

Dialog_sfmpointcloudcreate::~Dialog_sfmpointcloudcreate()
{
    delete ui;
}

void Dialog_sfmpointcloudcreate::on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2)//匹配数据路径
{

}

void Dialog_sfmpointcloudcreate::on_pushButton_browseInputDir_clicked()//匹配数据路径按钮
{

}

void Dialog_sfmpointcloudcreate::on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2)//结果输出路径
{

}

void Dialog_sfmpointcloudcreate::on_pushButton_browseOutputDir_clicked()//结果输出路径按钮
{

}

void Dialog_sfmpointcloudcreate::on_comboBox_triangulationMethod_activated(const QString &arg1)//空中三角测量方法
{

}

void Dialog_sfmpointcloudcreate::on_comboBox_resectionMethod_activated(const QString &arg1)//计算后方交汇方法
{

}

void Dialog_sfmpointcloudcreate::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_sfmpointcloudcreate::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
