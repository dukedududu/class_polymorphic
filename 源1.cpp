/*дһ�����򣬶���������Shape��
����������3�������ࣺCircle(Բ��)��Square(������)��Rectangle(����)��
���麯���ֱ���㼸��ͼ��������������ǵĺ͡�
Ҫ���û���ָ�����飬ʹ����ÿһ��Ԫ��ָ��һ�����������*/
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