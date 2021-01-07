#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include "about_us.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QPainter;
class QImage;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void paintEvent(QPaintEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
private slots:
    void on_actionExit_triggered();
    void on_actionSize_triggered();
    void on_actionColor_triggered();



    void on_actionAbout_Us_triggered();

private:
    Ui::MainWindow *ui;
    QPainter *mPainter;
    QImage *mImage;
      about_us  *about;

    QPoint mBegin;
    QPoint mEnd;
    QColor mcolor;
    bool mEnabled;

    int mSize;
};
#endif // MAINWINDOW_H
