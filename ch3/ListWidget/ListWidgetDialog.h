#ifndef LISTWIDGETDIALOG_H_BUFJ86MJ
#define LISTWIDGETDIALOG_H_BUFJ86MJ

#include <QObject>
#include <QDialog>
#include <QListWidget>

class ListWidgetDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ListWidgetDialog (QDialog* parent =0);
    void setupUI();

public slots:
    void moveLeft();
    void moveRight();

private:
    QListWidget *leftList, *rightList;
};




#endif /* end of include guard: LISTWIDGETDIALOG_H_BUFJ86MJ */
