#ifndef CIVABASE_H
#define CIVABASE_H

#include <QWidget>

namespace Ui {
class civaBase;
}

class civaBase : public QWidget
{
    Q_OBJECT
    
public:
    explicit civaBase(QWidget *parent = 0);
    ~civaBase();
    
private slots:
    void on_civaBase_clicked();

private:
    Ui::civaBase *ui;
};

#endif // CIVABASE_H
