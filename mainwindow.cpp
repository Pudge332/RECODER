#include "mainwindow.h"
#include "reader.h"
#include "maker.h"
#include "coder.h"
#include <QCoreApplication>
#include <QFileDialog>
#include <QString>
#include <QRect>
#include <QFile>
#include <cstring>
#include <iostream>
#include <QtGlobal>
#include <QLineEdit>
#include <iostream>
#include <QDesktopWidget>
#include <QSizePolicy>
#include <QColor>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
{
    resize(QDesktopWidget().availableGeometry(this).size() * 0.3);
    m_button = new QPushButton("Выберите файл для переработки", this);
    m_button->setGeometry(QRect(QPoint(5, 2), QSize(565, 305)));
    m_button->setFont(QFont("Helvetica [Cronyx]", 20, QFont::Bold));
    connect(m_button, SIGNAL (released()), this, SLOT (PP()));
}
MainWindow::~MainWindow()
{

}
void MainWindow::PP()
{
    QString path = QFileDialog::getOpenFileName(0,QObject::tr("Выберите файл"),QDir::homePath(), QObject::tr("Файл TXT формата (*.txt);;Все файлы (*.*)"));
    QString path1 = QFileDialog::getSaveFileName(0); /*получаем путь к файлу, который будем создавать*/
    Coder(Reader(path), path1);
}








