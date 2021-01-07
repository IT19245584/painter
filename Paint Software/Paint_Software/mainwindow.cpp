#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QInputDialog"
#include "QColorDialog"
#include <QDesktopWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QImage>
#include <QProcess>
#include <QMessageBox>
#define DEFAULT_SIZE 5;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mImage = new QImage(QApplication::desktop()->size(),

                        QImage::Format_ARGB32_Premultiplied);
    mPainter = new QPainter(mImage);
    mEnabled = false;
    mcolor = QColor(Qt::black);
    mSize = DEFAULT_SIZE;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mPainter;
    delete mImage;

}



void MainWindow::paintEvent(QPaintEvent *e)
{
     QPainter painter(this);
     painter.fillRect(mImage->rect(), Qt::white);
     painter.drawImage(0,0,*mImage);
     e -> accept();
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    mEnabled = true;
    mBegin = e ->pos();
    e -> accept();
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
   if(!mEnabled){
         e -> accept();
         return;
   }
   QPen pen(mcolor);
   pen.setCapStyle(Qt::RoundCap);
   pen.setWidth(mSize);
   mEnd = e -> pos();
   mPainter -> setPen(pen);

   mPainter->drawLine( mBegin , mEnd);
   mBegin = mEnd;
   update();
   e -> accept();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
     mEnabled = false;
     e -> accept();
}


void MainWindow::on_actionExit_triggered()
{
   close();
}

void MainWindow::on_actionSize_triggered()
{
  mSize = QInputDialog::getInt(this,"Select Brush Size","Select Brush Size",5,1);
}

void MainWindow::on_actionColor_triggered()
{
  mcolor = QColorDialog::getColor(Qt::black,this,"Select Color");
}





void MainWindow::on_actionAbout_Us_triggered()
{
    about = new about_us(this);
    about->show();
}
