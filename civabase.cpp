#include "civabase.h"
#include "ui_civabase.h"

civaBase::civaBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::civaBase)
{
    ui->setupUi(this);
}

civaBase::~civaBase()
{
    delete ui;
}

void civaBase::on_civaBase_clicked()
{
    ui->typLabel->setText("submitted");
}
