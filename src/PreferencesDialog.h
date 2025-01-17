/**************************************************************************
 *  This file is part of QuteScoop. See README for license
 **************************************************************************/

#ifndef PREFERENCESDIALOG_H_
#define PREFERENCESDIALOG_H_

#include "ui_PreferencesDialog.h"


class PreferencesDialog: public QDialog, public Ui::PreferencesDialog {
        Q_OBJECT
    public:
        static PreferencesDialog *instance(bool createIfNoInstance = true, QWidget *parent = 0);
    protected:
        void closeEvent(QCloseEvent *event);
    private slots:
        void loadSettings();
        void lazyloadTextureIcons();
        void on_cbResetConfiguration_stateChanged(int state);

        // import/export to .ini
        void on_pbExportToFile_clicked();
        void on_pbImportFromFile_clicked();

        // UI slots:
        void on_cbShootScreenshots_toggled(bool checked);
        void on_cbScreenshotFormat_currentIndexChanged(QString value);
        void on_cbScreenshotMethod_currentIndexChanged(int index);
        void on_glTextures_toggled(bool checked);
        void on_glTextureEarth_currentIndexChanged(QString );
        void on_glStippleLines_toggled(bool checked);
        void on_glEarthShininess_valueChanged(int value);
        void on_glLights_valueChanged(int value);
        void on_sbEarthGridEach_valueChanged(int );
        void on_cbBlend_toggled(bool checked);
        void on_glLightsSpread_valueChanged(int value);
        void on_pbSpecularLightColor_clicked();
        void on_pbSunLightColor_clicked();
        void on_cbLighting_toggled(bool checked);
        void on_pbReinitOpenGl_clicked();
        void on_pbStylesheetUpdate_clicked();
        void on_pbStylesheetExample2_clicked();
        void on_pbStylesheetExample1_clicked();
        void on_cbShowFixes_toggled(bool checked);
        void on_spinBoxDownloadInterval_valueChanged(int value);
        void on_cbDownloadPeriodically_stateChanged(int state);
        void on_cbDownloadOnStartup_stateChanged(int state);
        void on_cbNetwork_currentIndexChanged(int index);
        void on_editUserDefinedLocation_editingFinished();
        void on_gbDownloadBookings_toggled(bool checked);
        void on_editBookingsLocation_editingFinished();
        void on_sbBookingsInterval_valueChanged(int value);
        void on_cbBookingsPeriodically_toggled(bool checked);
        void on_cbSaveWhazzupData_stateChanged(int state);
        void on_groupBoxProxy_toggled(bool );
        void on_editProxyServer_editingFinished();
        void on_editProxyPort_editingFinished();
        void on_editProxyUser_editingFinished();
        void on_editProxyPassword_editingFinished();
        void on_buttonResetAirportTraffic_clicked();
        void on_cbFilterTraffic_stateChanged(int state);
        void on_spFilterDistance_valueChanged(int value);
        void on_spFilterArriving_valueChanged(double value);
        void on_sbCongestionMinimum_valueChanged(int );
        void on_sbCongestionBorderLineStrength_valueChanged(double value);
        void on_pbCongestionBorderLineColor_clicked();
        void on_cbShowCongestion_clicked(bool checked);
        void on_cbLineSmoothing_stateChanged(int state);
        void on_cbDotSmoothing_stateChanged(int state);
        void on_sbMaxTextLabels_valueChanged(int value);
        void on_pbUpperWindColor_clicked();
        void on_editNavdir_editingFinished();
        void on_browseNavdirButton_clicked();
        void on_cbUseNavDatabase_stateChanged(int state);
        void on_buttonResetEarthSpace_clicked();
        void on_pbBackgroundColor_clicked();
        void on_pbGlobeColor_clicked();
        void on_pbGridLineColor_clicked();
        void on_sbGridLineStrength_valueChanged(double value);
        void on_pbCoastLineColor_clicked();
        void on_sbCoastLineStrength_valueChanged(double value);
        void on_pbCountryLineColor_clicked();
        void on_sbCountryLineStrength_valueChanged(double value);
        void on_buttonResetFir_clicked();
        void on_pbFirBorderLineColor_clicked();
        void on_sbFirBorderLineStrength_valueChanged(double value);
        void on_pbFirFontColor_clicked();
        void on_pbFirFont_clicked();
        void on_pbFirFillColor_clicked();
        void on_pbFirHighlightedBorderLineColor_clicked();
        void on_sbFirHighlightedBorderLineStrength_valueChanged(double value);
        void on_pbFirHighlightedFillColor_clicked();
        void on_pbAirportDotColor_clicked();
        void on_sbAirportDotSize_valueChanged(double value);
        void on_pbAirportFontColor_clicked();
        void on_pbAirportFont_clicked();
        void on_pbAppBorderLineColor_clicked();
        void on_sbAppBorderLineStrength_valueChanged(double value);
        void on_pbAppColorCenter_clicked();
        void on_pbAppColorMargin_clicked();
        void on_pbTwrColorCenter_clicked();
        void on_pbTwrColorMargin_clicked();
        void on_pbGndBorderLineColor_clicked();
        void on_sbGndBorderLineStrength_valueChanged(double value);
        void on_pbGndFillColor_clicked();
        void on_sbInactAirportDotSize_valueChanged(double value);
        void on_pbInactAirportDotColor_clicked();
        void on_pbInactAirportFont_clicked();
        void on_pbInactAirportFontColor_clicked();
        void on_applyAirports_clicked();
        void on_buttonResetPilot_clicked();
        void on_applyPilots_clicked();
        void on_pbPilotFontColor_clicked();
        void on_pbPilotFont_clicked();
        void on_pbPilotDotColor_clicked();
        void on_sbPilotDotSize_valueChanged(double value);
        void on_spinBoxTimeline_valueChanged(int value);
        void on_pbTimeLineColor_clicked();
        void on_sbTimeLineStrength_valueChanged(double value);
        void on_pbDepLineColor_clicked();
        void on_pbDestLineColor_clicked();
        void on_sbDepLineStrength_valueChanged(double value);
        void on_sbDestLineStrength_valueChanged(double value);
        void on_cbDepLineDashed_toggled(bool checked);
        void on_cbDestLineDashed_toggled(bool checked);
        void on_waypointsFont_clicked();
        void on_waypointsFontColor_clicked();
        void on_waypointsDotColor_clicked();
        void on_waypointsDotSize_valueChanged(double );
        void on_cbCheckForUpdates_stateChanged(int state);
        void on_cbSendVersionInfo_stateChanged(int state);
        void on_cbDownloadClouds_stateChanged(int state);
        void on_cbUseHighResClouds_stateChanged(int state);
        void on_pbWheelCalibrate_clicked();
        void on_sbZoomFactor_valueChanged(double );
        void on_cb_Animation_stateChanged(int state);
        void on_sb_highlightFriendsLineWidth_valueChanged(double value);
        void on_pb_highlightFriendsColor_clicked();
        void on_useSelectionRectangle_toggled(bool checked);
        void on_cbSimpleLabels_toggled(bool checked);
        void on_cbRememberMapPositionOnClose_toggled(bool checked);
        void on_sbWindSize_valueChanged(int factor);
        void on_sbWindSecondarySpan_valueChanged(int value);

private:
        PreferencesDialog(QWidget *parent);
        bool _settingsLoaded;
};

#endif /*PREFERENCESDIALOG_H_*/
