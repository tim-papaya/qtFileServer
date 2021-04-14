#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>

#include "clienthandler.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ClientWidget; }
QT_END_NAMESPACE

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_sendBtn_clicked();
    void receivedFromClient(QString data);
private:
    Ui::ClientWidget *m_ui;
    ClientHandler m_client;
};
#endif // CLIENTWIDGET_H
