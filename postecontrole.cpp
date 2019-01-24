#include "postecontrole.h"
#include "ui_postecontrole.h"



PosteControle::PosteControle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PosteControle)
{
    this->setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

PosteControle::~PosteControle()
{
    delete ui;
}

void PosteControle::on_lineRecherche_textChanged(const QString &arg1)
{
    if(ui->lineRecherche->text() == "/config")ui->stackedWidget->setCurrentIndex(1);
}

void PosteControle::on_Btn_enregistrer_clicked()
{
    ui->lineRecherche->clear();
    ui->stackedWidget->setCurrentIndex(0);
}
