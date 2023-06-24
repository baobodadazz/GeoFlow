#ifndef DIALOG_AUTOMAKE_H
#define DIALOG_AUTOMAKE_H

#include <QDialog>

namespace Ui {
class Dialog_automake;
}

class Dialog_automake : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_automake(QWidget *parent = 0);
    ~Dialog_automake();

public:
    Ui::Dialog_automake *ui;
private slots:
    void on_comboBox_describer_activated(const QString &arg1);
    void on_comboBox_quality_activated(const QString &arg1);
    void on_comboBox_upright_activated(const QString &arg1);
    void on_comboBox_forcecompute_activated(const QString &arg1);
    void on_comboBox_geometricmodel_activated(const QString &arg1);
    void on_lineEdit_distanceRatio_cursorPositionChanged(int arg1, int arg2);
    void on_comboBox_forcematch_activated(const QString &arg1);
    void on_comboBox_triangulationMethod_activated(const QString &arg1);
    void on_comboBox_resectionMethod_activated(const QString &arg1);
    void on_comboBox_activated(const QString &arg1);
    void on_lineEdit_inputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseInputDir_clicked();
    void on_lineEdit_kMatrix_cursorPositionChanged(int arg1, int arg2);
    void on_lineEdit_OutputDir_cursorPositionChanged(int arg1, int arg2);
    void on_pushButton_browseOutputDir_clicked();
    void on_btn_OK_clicked();
    void on_btn_CANCEL_clicked();
    void on_lineEdit_inputDir_returnPressed();
};

#endif // DIALOG_AUTOMAKE_H
