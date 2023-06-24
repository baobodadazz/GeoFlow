#ifndef DIALOG_CAMSET_H
#define DIALOG_CAMSET_H

#include <QDialog>

namespace Ui {
class Dialog_CamSet;
}

class Dialog_CamSet : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_CamSet(QWidget *parent = 0);
    ~Dialog_CamSet();

public:
    Ui::Dialog_CamSet *ui;
private slots:
    void on_lineEdit_model_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_focus_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_fov_cursorPositionChanged(int arg1, int arg2);
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_CAMSET_H
