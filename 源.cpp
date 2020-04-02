/*дһ�����򣬶���������Shape������������2�������ࣺCircle(Բ��)��Rectangle(����)��
��һ����ͨ����printarea�ֱ�������϶��ߵ������2��ͼ�ε������ڶ������ʱ������*/
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
