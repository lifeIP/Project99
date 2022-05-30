//Класс, для операций с точками в пространстве(хранить x, y, z - координаты).
//Вычислять расстояние до начала координат.

#pragma once
class CPoint
{
protected:
	float x;
	float y;
	float z;
public:
	CPoint();
	CPoint(float x, float y, float z);
	~CPoint();
	void print();
	float nachcoord();
	void setX(float x);
	float getX();
	void setY(float y);
	float getY();
	void setZ(float z);
	float getZ();
	float lenght(CPoint& pt);
	float operator - (CPoint& pt);
	CPoint& operator += (CPoint& pt);
	friend void print_point(CPoint& pt);
};