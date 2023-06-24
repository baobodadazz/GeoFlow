#ifndef DIALOG_POINTINFO_H
#define DIALOG_POINTINFO_H

#include <QDialog>

namespace Ui {
class Dialog_pointinfo;
}

class Dialog_pointinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_pointinfo(QWidget *parent = 0);
    ~Dialog_pointinfo();

public:
    Ui::Dialog_pointinfo *ui;
private slots:
    void on_lineEdit_note_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_xi_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_yi_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_zi_cursorPositionChanged(int arg1, int arg2);
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_POINTINFO_H
