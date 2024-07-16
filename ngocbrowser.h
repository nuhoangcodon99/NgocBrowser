#ifndef NgocBROWSER_H
#define NgocBROWSER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class NgocBrowser; }
QT_END_NAMESPACE

class NgocBrowser : public QMainWindow
{
    Q_OBJECT

public:
    NgocBrowser(QWidget *parent = nullptr);
    ~NgocBrowser();

private slots:
    void on_addressEdit_returnPressed();

    void on_backButton_clicked();

    void on_forwardButton_clicked();

    void on_helpButton_clicked();

    void on_webView_urlChanged(const QUrl &arg1);

private:
    Ui::NgocBrowser *ui;
};
#endif // NgocBROWSER_H
