#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
    if( QMessageBox::question(this,this->windowTitle(),"Are you sure you want to quit?", QMessageBox::Yes, QMessageBox::No ) == QMessageBox::Yes )
    {
        QApplication::exit();
    }
}

#include "dialogabout.h"
void MainWindow::on_actionAbout_Linguist_triggered()
{
    DialogAbout dialogAbout(this);
    dialogAbout.exec();
}

#include "dialoggrammaranalyzer.h"
void MainWindow::on_actionGrammar_Analyzer_triggered()
{
    (new DialogGrammarAnalyzer(this))->exec();
}
