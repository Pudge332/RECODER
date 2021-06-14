#include "maker.h"
#include <QString>
#include <QFile>
#include <iostream>

using namespace std;

QString Maker(QString str, QString path1)
{
    QFile newfile(path1);
    if (newfile.open(QIODevice::WriteOnly | QIODevice::Append)) {
    newfile.write(str.toUtf8()); /*Записываем данные*/
    newfile.close(); /*Закрываем файл*/
    }
    else
    {
        cout << "ERROR MAKING" << "\n";
    }
    return 0;
    str.clear();
}
