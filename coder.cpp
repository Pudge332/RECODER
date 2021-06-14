#include "coder.h"
#include <QString>
#include "maker.h"
#include <cctype>
#include <QChar>

void Coder(QString str, QString path1)
{
    int SIT = 0;
    unsigned long l;
    unsigned long s;
    s = str.length();
    QString b;
    str.resize(s);
    QChar t;
    QChar tt;
    QChar ttt;
    int cc = 1;
    for(unsigned long i = 0; i <= s; i++)
    {
       if ((str.at(i) == ".") && (str.at(i + 1) != " "))
           SIT = SIT + 1;
    }
    s = s + SIT;
    str.resize(s);
    while (cc == 1)
    {
        cc = 0;
    for(unsigned long i = 0; i <= s; i++)
    {
       if ((str.at(i) == ".") && (str.at(i + 1) != ' '))
       {
           cc = 1;
           b = str;
           tt = str.at(i + 1);
           str.replace(i + 1, 1, ' ');
           str.replace(i + 2, 1, tt);
           i = i + 3;
           l = i;
           for(l; l <= s; l++)
           {
               t = b.at(l - 1);
               str.replace(l, 1, t);
           }

       }

    }
}
    cc = 1;
    for(unsigned long i = 0; i <= s; i++)
    {
       if ((str.at(i) == ",") && (str.at(i + 1) != " "))
           SIT = SIT + 1;
    }
    s = s + SIT;
    str.resize(s);
    while (cc == 1)
    {
        cc = 0;
    for(unsigned long i = 0; i <= s; i++)
    {
       if ((str.at(i) == ",") && (str.at(i + 1) != ' '))
       {
           cc = 1;
           b = str;
           tt = str.at(i + 1);
           str.replace(i + 1, 1, ' ');
           str.replace(i + 2, 1, tt);
           i = i + 3;
           l = i;
           for(l; l <= s; l++)
           {
               t = b.at(l - 1);
               str.replace(l, 1, t);
           }

       }

    }
}
    for (unsigned long i = 0; i < s - 1; i++)
    {
            if (str.at(i) == '.')
            {
                ttt = str.at(i + 2);
                ttt = ttt.toUpper();
                str.replace(i + 2, 1, ttt);
            }
    }

    Maker(str, path1);
}
