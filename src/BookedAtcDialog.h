/**************************************************************************
 *  This file is part of QuteScoop. See README for license
 **************************************************************************/

#ifndef BOOKEDATCDIALOG_H
#define BOOKEDATCDIALOG_H

#include "ui_BookedAtcDialog.h"

#include "BookedAtcDialogModel.h"
#include "BookedAtcSortFilter.h"

class BookedAtcDialog : public QDialog, private Ui::BookedAtcDialog {
        Q_OBJECT
    public:
        static BookedAtcDialog *instance(bool createIfNoInstance = true, QWidget *parent = 0);
        void destroyInstance();
        void refresh();
        void setDateTime(const QDateTime &dateTime);

    signals:
        void needBookings();

    protected:
        void closeEvent(QCloseEvent *event);

    private slots:
        void on_dateTimeFilter_dateTimeChanged(QDateTime date);
        void performSearch();
        void on_tbPredict_clicked();
        void on_spinHours_valueChanged(int val);
        void on_editFilter_textChanged(QString str);

    private:
        BookedAtcDialog(QWidget *parent);

        BookedAtcDialogModel *_bookedAtcModel;
        BookedAtcSortFilter *_bookedAtcSortModel;

        QDateTime _dateTimeFilter_old;
        QTimer _editFilterTimer;
};

#endif // BOOKEDATCDIALOG_H
