#ifndef POSTECONTROLE_H
#define POSTECONTROLE_H

#include <QMainWindow>

namespace Ui {
class PosteControle;
}

class PosteControle : public QMainWindow
{
    Q_OBJECT

public:
    explicit PosteControle(QWidget *parent = nullptr);
    ~PosteControle();

private slots:
    void on_lineRecherche_textChanged(const QString &arg1);


    void on_Btn_enregistrer_clicked();

private:
    Ui::PosteControle *ui;
};

#endif // POSTECONTROLE_H
