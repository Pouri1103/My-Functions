#include <QString>
#include <QDebug>
#include <QRandomGenerator>
#include <QRandomGenerator64>


int random(int len)
{
    switch (len) {
    case 1:
        return QRandomGenerator::global()->bounded(10);
    case 2:
        return QRandomGenerator::global()->bounded(10,100);
    case 3:
        return QRandomGenerator::global()->bounded(100,1000);
    case 4:
        return QRandomGenerator::global()->bounded(1000,10000);
    case 5:
        return QRandomGenerator::global()->bounded(10000,100000);
    case 6:
        return QRandomGenerator::global()->bounded(100000,1000000);
    case 7:
        return QRandomGenerator::global()->bounded(1000000,10000000);
    case 8:
        return QRandomGenerator::global()->bounded(10000000,100000000);
    case 9:
        return QRandomGenerator::global()->bounded(100000000,1000000000);
    default:
        qDebug()<<"Enter a num 1 to 9 !";
        return 0;
        break;
    }
}
int random(int low,int high)
{
    return QRandomGenerator::global()->bounded(low,high);
}


// int maximum
/// 2'147'483'647

// QRandomGenerator max
/// 4'294'967'295

// QRandomGenerator64 max
/// 18'446'744'073'709'551'615
