#ifndef DIALOG_RECONSTRUCTMESH_H
#define DIALOG_RECONSTRUCTMESH_H

#include <QDialog>

namespace Ui {
class Dialog_reconstructmesh;
}

class Dialog_reconstructmesh : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_reconstructmesh(QWidget *parent = 0);
    ~Dialog_reconstructmesh();

public:
    Ui::Dialog_reconstructmesh *ui;
private slots:
    void on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseInputDir_clicked();
    void on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseOutputDir_clicked();
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
};

#endif // DIALOG_RECONSTRUCTMESH_H
