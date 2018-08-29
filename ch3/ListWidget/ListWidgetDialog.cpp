#include <QPushButton>
#include <QGridLayout>
#include <QListWidget>
#include <QStringList>

#include <ListWidgetDialog.h>

ListWidgetDialog::ListWidgetDialog(QDialog* parent)
    : QDialog(parent){
    setupUI();
}

void ListWidgetDialog::setupUI(){
    QPushButton *left, *right;

    QGridLayout* layout = new QGridLayout(this);
    layout->addWidget(left = new QPushButton("<<"), 0, 1);
    layout->addWidget(right = new QPushButton(">>"), 1, 1);
    layout->addWidget(leftList = new QListWidget, 0, 0,3,1);
    layout->addWidget(rightList = new QListWidget, 0, 2,3,1);


    connect(left, &QPushButton::clicked, this, &ListWidgetDialog::moveLeft);
    connect(right, &QPushButton::clicked, this, &ListWidgetDialog::moveRight);
    
    //connect(left, SIGNAL(clicked()), this, SLOT(moveLeft()));
    //connect(right, SIGNAL(clicked()), this, SLOT(moveRight()));


    QStringList items;
    items << "Argentine" << "Brazilian" << "South African"
        << "USA West" << "Monaco" << "Belgian" << "Spanish" 
        << "Swedish" << "French" << "British" << "German"
        << "Austrian" << "Dutch" <<  "Italian" << "USA East"
        << "Canadian";

    leftList->addItems(items);
}


void ListWidgetDialog::moveLeft(){
    if(rightList->selectedItems().count() !=1)
        return;

    QListWidgetItem *item = rightList->takeItem(rightList->currentRow());

    leftList->addItem(item);
}


void ListWidgetDialog::moveRight(){
    if(leftList->selectedItems().count() != 1)
        return;

    QListWidgetItem *item = leftList->takeItem(leftList->currentRow());

    rightList->addItem(item);
}


