#ifndef COLORDIALOG_H
#define COLORDIALOG_H

#include <QObject>

#include <QDialog>
#include <QPushButton>
#include <QLabel>

class Colordialog : public QDialog
{
    Q_OBJECT
public:
    explicit Colordialog(QDialog* parent = 0);
    void setupUI();


public slots:
    void changeColor();

private:
    QPushButton* button;
    QLabel* label;
    

};

#endif /* COLORDIALOG_H */
