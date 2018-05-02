#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
#include <QWidget>
#include "comserial.h"
using namespace std;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;


    QSerialPort *devserial;
    comserial *procSerial;

    void CarregarInfoDispSerial(void);

private slots:
    void on_pbCloseSerial_clicked();
    void on_pbOpenSerial_clicked();
    void on_pbSendCmd_clicked();

    void WriteData(const QByteArray data);
    void ReadData();
    void on_btnVersion_clicked();
    void on_pbSendCmd2_clicked();
    void on_btnTriang_clicked();
    void on_btnSeno_clicked();
    void on_btnQuad_clicked();
    void on_btnSerra_clicked();
    void on_btnHw_clicked();
    void on_btnLEDOn_clicked();
    void on_btnQuadrada_clicked();
};

#endif // WIDGET_H
