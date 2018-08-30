#include "colordialog.h"

#include <QVBoxLayout>

#include <QColor>
#include <QColorDialog>

Colordialog::Colordialog(QDialog* parent)
    : QDialog(parent){
        setupUI();    
    }

void Colordialog::setupUI(){

    QVBoxLayout* vLayout = new QVBoxLayout(this);

    button = new QPushButton("Change Color");
    label = new QLabel("This is some text");

    vLayout->addWidget(button);
    vLayout->addWidget(label);

    connect(button, &QPushButton::clicked, this, &Colordialog::changeColor); 

}

void Colordialog::changeColor(){

    QColor color = QColorDialog::getColor(
            Qt::yellow, this);

    if(color.isValid()){
        QString tmpColor = color.name();
        label->setStyleSheet( QString("color:%1").arg(tmpColor));
}
}
