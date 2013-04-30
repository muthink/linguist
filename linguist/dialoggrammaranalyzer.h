#ifndef DIALOGGRAMMARANALYZER_H
#define DIALOGGRAMMARANALYZER_H

#include <QDialog>

namespace Ui {
class DialogGrammarAnalyzer;
}

class DialogGrammarAnalyzer : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGrammarAnalyzer(QWidget *parent = 0);
    ~DialogGrammarAnalyzer();
    
private:
    Ui::DialogGrammarAnalyzer *ui;
};

#endif // DIALOGGRAMMARANALYZER_H
