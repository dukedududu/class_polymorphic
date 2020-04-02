/*写一个程序，定义抽象基类Shape，由它派生出2个派生类：Circle(圆形)、Rectangle(矩形)，
用一个普通函数printarea分别输出以上二者的面积，2个图形的数据在定义对象时给定。*/
#include<iostream>
using namespace std;
class Shape
{
protected:
	double area;
public:
	virtual void countarea() {};
};
class Circle:public Shape
{
	double rau;
public:
	Circle(double r):rau(r){}
	void countarea() {
		area = 3.14 * rau * rau;
		cout << "area of Circle:" << area << endl;
	}
};
class Rectangle :public Shape
{
	double height;
	double weight;
public:
	Rectangle(double h,double w):height(h),weight(w){}
	void countarea()
	{
		area = height * weight;
		cout << "area of Rectangle: "<<area<<endl;
		
	}
};
void printarea(Shape &a)
{
	a.countarea();
}
int main()
{
	Circle c(2);
	Rectangle r(2, 2);
	printarea(c);
	printarea(r);
	return 0;
}
