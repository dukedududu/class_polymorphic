/*写一个程序，定义抽象基类Shape，
由它派生出3个派生类：Circle(圆形)，Square(正方形)，Rectangle(矩形)。
用虚函数分别计算几种图形面积，并求它们的和。
要求用基类指针数组，使它的每一个元素指向一个派生类对象。*/
#include<iostream>
using namespace std;
class Shape
{
protected:
	double area;
public:
	virtual void countarea() {};
	double set() {
		return area;
	}
};
class Circle :public Shape
{
	double rau;
public:
	Circle(double r) :rau(r) {}
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
	Rectangle(double h, double w) :height(h), weight(w) {}
	void countarea()
	{
		area = height * weight;
		cout << "area of Rectangle: " << area << endl;

	}
};
class Square :public Shape
{
	double side;
public:
	Square(double s):side(s){}
	void countarea() {
		area = side * side;
		cout << "area of Square:" << area << endl;
	}
};
void printarea(Shape& a)
{
	a.countarea();
}
int main()
{
	Circle c(2);
	Rectangle r(2, 2);
	Square s(3);
	printarea(c);
	printarea(r);
	printarea(s);
	Shape* p[3];
	p[0] = &c;
	p[1] = &r;
	p[2] = &s;
	double sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += p[i]->set();
	}
	cout << "sum of area:" << sum;
	return 0;
}