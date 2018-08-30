
#ifndef FONTDIALOG_H
#define FONTDIALOG_H

#include <QDialog>
#include <QObject>
#include <QLabel>
#include <QPushButton>


class Fontdialog : public QDialog
{
    Q_OBJECT
public:
    explicit Fontdialog(QDialog* parent=0);

public slots:
    void updateLabel();

private:
    QLabel* label;
    QPushButton* button;
};

#endif /* FONTDIALOG_H */
