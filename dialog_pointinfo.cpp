#include "dialog_pointinfo.h"
#include "ui_dialog_pointinfo.h"

Dialog_pointinfo::Dialog_pointinfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_pointinfo)
{
    ui->setupUi(this);
}

Dialog_pointinfo::~Dialog_pointinfo()
{
    delete ui;
}

void Dialog_pointinfo::on_lineEdit_note_cursorPositionChanged(int arg1, int arg2)//映射点名称
{

}

void Dialog_pointinfo::on_lineEdit_xi_cursorPositionChanged(int arg1, int arg2)//X
{

}

void Dialog_pointinfo::on_lineEdit_yi_cursorPositionChanged(int arg1, int arg2)//Y
{

}

void Dialog_pointinfo::on_lineEdit_zi_cursorPositionChanged(int arg1, int arg2)//Z
{

}

void Dialog_pointinfo::on_btn_OK_clicked()//这是确定键，也是运行的扳机，还得加东西的
{
    this->close();
}

void Dialog_pointinfo::on_btn_CANCEL_clicked()//取消
{
    this->close();
}
