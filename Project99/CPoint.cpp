//�����, ��� �������� � ������� � ������������(������� x, y, z - ����������).
//��������� ���������� �� ������ ���������.


#include "CPoint.h"
#include <iostream>
#include <math.h>
using namespace std;

float CPoint::nachcoord() {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
CPoint::CPoint() :
	x(0.0), y(0.0), z(0.0)
{
	//	x = y = z = 0.0;
	cout << "����������� ��-���������" << endl;
}
CPoint::CPoint(float x, float y, float z)
{
	CPoint::x = x;
	this->y = y;
	CPoint::z = z;
	cout << "����������� � �����������: " << x << ", " << y << ", " << z << endl;
}
CPoint::~CPoint()
{
	cout << "����� �����������" << endl;
}
void CPoint::print()
{
	cout << "���������� �����: x = " << x << ", y = " << y << ", z = " << z << endl;
}
void CPoint::setX(float x)
{
	if (x < -1000.0 || x > 1000.0)
		cout << "�������� x ������������!" << endl;
	else
		CPoint::x = x;
}
float CPoint::getX()
{
	return x;
}
void CPoint::setY(float y)
{
	if (y < -1000.0 || y > 1000.0)
		cout << "�������� y ������������!" << endl;
	else
		CPoint::y = y;
}
float CPoint::getY()
{
	return y;
}
void CPoint::setZ(float z)
{
	if (z < -1000.0 || z > 1000.0)
		cout << "�������� z ������������!" << endl;
	else
		CPoint::z = z;
}
float CPoint::getZ()
{
	return z;
}
float CPoint::lenght(CPoint& pt)
{
	return sqrt(pow(pt.x - x, 2) + pow(pt.y - y, 2) + pow(pt.z - z, 2));
}
float CPoint::operator - (CPoint& pt)
{
	return lenght(pt);
}
CPoint& CPoint::operator += (CPoint& pt)
{
	x += pt.x;
	y += pt.y;
	z += pt.z;
	return *this;
}


