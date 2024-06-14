#include <QString>
#include <QDebug>
#include <chrono>

using namespace std;


//////////////////////////////////////////////////////////////////////

chrono::high_resolution_clock::time_point start;
chrono::high_resolution_clock::time_point stop;

//////////////////////////////////////////////////////////////////////


void Start()
{
    start = chrono::high_resolution_clock::now();
}


int End()
{
    stop = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(stop-start);
    return duration.count();
}


void End(int)
{
    stop = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(stop-start);
    qDebug() << duration.count() << "ms";
}
