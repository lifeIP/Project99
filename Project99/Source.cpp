//Класс, для операций с точками в пространстве(хранить x, y, z - координаты).
//Вычислять расстояние до начала координат.

#include <iostream>
#include "CPoint.h"
using namespace std;
void print_point(CPoint& pt);
int main()
{
    setlocale(LC_ALL, "RUS");
    CPoint pt;
    CPoint* pt2 = new CPoint(1.0, 2.0, 3.0);
    cout << "pt:" << endl;
    pt.print();
    pt.setX(2000);
    //pt.setX(100);
    pt.setY(10);
    pt.setZ(5);
    cout << "pt:" << endl;
    pt.print();
    print_point(pt);
    cout << pt.nachcoord() << endl;
    cout << "pt2:" << endl;
    pt2->print();
    cout << "Расстояние между точками: " << *pt2 - pt << endl;
    CPoint pt3;
    pt3 = pt += *pt2;
    cout << "pt:" << endl;
    pt.print();
    cout << "pt3:" << endl;
    pt3.print();

    delete pt2;
    cout << "Конец программы" << endl;
}
void print_point(CPoint& pt)
{
    cout << "Вывод координат точки (дружественная функция): " << endl;
    cout << "x = " << pt.x << ", y = " << pt.y << ", z = " << pt.z << endl;
}