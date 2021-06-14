#include "reader.h"
#include <QString>
#include <QFile>
#include <iostream>

using namespace std;

QString Reader(QString path)
{
    QString str;
    QFile file(path);

    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        str="";
        while(!file.atEnd())
        {
            str=str+file.readLine();
        }
        file.close();
    }
    else
    {
        cout << "ERROR OPENING" << "\n";
    }
    return str;
}
