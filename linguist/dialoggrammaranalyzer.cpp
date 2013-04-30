#include "dialoggrammaranalyzer.h"
#include "ui_dialoggrammaranalyzer.h"

DialogGrammarAnalyzer::DialogGrammarAnalyzer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGrammarAnalyzer)
{
    ui->setupUi(this);
}

DialogGrammarAnalyzer::~DialogGrammarAnalyzer()
{
    delete ui;
}
