#include "charts.h"
#include "ui_charts.h"
#include "detailcharts.h"



charts::charts(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::charts)
{
    ui->setupUi(this);
}

charts::~charts()
{
    delete ui;
}
