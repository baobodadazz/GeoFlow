#ifndef QUICREATOR_H
#define QUICREATOR_H

#include <QMainWindow>
#include "dialog_automake.h"
#include "dialog_camset.h"
#include "dialog_coordinatemapping.h"
#include "dialog_densifypointcloudcreate.h"
#include "dialog_featurematch.h"
#include "dialog_pointinfo.h"
#include "dialog_reconstructmesh.h"
#include "dialog_sfmpointcloudcreate.h"
#include "dialog_texturemesh.h"
#include <string>



namespace Ui
{
class QUICreator;
}

class QUICreator : public QMainWindow
{
    Q_OBJECT

public:
    explicit QUICreator(QWidget *parent = 0);
    ~QUICreator();
    Dialog_automake *window_automake = NULL;

    std::string DIR = "F:\\GFTest";
    std::string command;
    std::string DIR_MVS;
private:
    Ui::QUICreator *ui;

private slots:
    void initForm();
    void initTableWidget();
    void initTreeWidget();
    void initListWidget();
    void initOther();
    void initStyle();
    void initTranslator();
    void on_btnCamPlace_clicked();
    void on_btnPointCloudRender_clicked();
    void on_btnWebRender_clicked();
    void on_btnTextureCloudRender_clicked();
    void on_btnRenderPointWeight_clicked();
    void on_btnRenderPointNum_clicked();
    void on_btnCamVisionUp_clicked();
    void on_btnCamVisionDown_clicked();
    void on_btnOutputSet_clicked();
    void on_btnSTART_clicked();
    void on_SpinRenderPointWeight_valueChanged(double arg1);
    void on_spinRenderPointNum_valueChanged(int arg1);
    void on_action_CamSet_triggered();
    void on_action_CoordinateMapping_triggered();
    void on_action_AutoMake_triggered();
    void on_action_SFMPointCloudCreate_triggered();
    void on_action_DensifyPointCloudCreate_triggered();
    void on_action_FeatureMatch_triggered();
    void on_action_ReconstructMesh_triggered();
    void on_action_TextureMesh_triggered();



    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_action_Close_triggered();

    void on_action_Save_triggered();

    void on_action_export_ply_triggered();

private:
    //Ui::quicreater ui;
    Dialog_automake atmk;
    Dialog_CamSet cmst;
    Dialog_CoordinateMapping crdm;
    Dialog_densifypointcloudcreate dpcc;
    Dialog_featurematch ftmt;
    Dialog_pointinfo ptnf;
    Dialog_reconstructmesh rcmh;
    Dialog_sfmpointcloudcreate spcc;
    Dialog_texturemesh ttmh;
    QTimer* timer;

};

#endif // QUICREATOR_H
