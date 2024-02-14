#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    Base xy(1366,768);
    xy.setX(1920);
    xy.setY(1080);
    cout << xy.getX() << "\n"<< xy.getY() << endl;
    return 0;
}
