
#include <QWidget>
#include <QApplication>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>

#include "myclass.h"

#include<QDebug>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv); // parent = app

    QWidget widget;

    QLineEdit* lineEdit = new QLineEdit;
    QLabel* label = new QLabel;

    QVBoxLayout* layout =  new QVBoxLayout;
    layout->addWidget(lineEdit);
    layout->addWidget(label);
    widget.setLayout(layout);

    MyClass* obj = new MyClass(" ", &app);


//    Old Approach    
//    QObject::connect( lineEdit, SIGNAL(textChanged(const QString&)), 
//            obj, SLOT(setText(const QString&)));

    // new Approach
    QObject::connect(lineEdit, &QLineEdit::textChanged, 
                     obj, &MyClass::setText);

//    QObject::connect( obj, SIGNAL(textChanged(const QString&)), 
//            label, SLOT(setText(const QString&)));

    // new approach
    QObject::connect(obj, &MyClass::textChanged, 
                     label, &QLabel::setText);

    widget.show();

    return app.exec();
}
