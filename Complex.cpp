#include<iostream>
using namespace std;
class Complex
{
	friend ostream& operator<<(ostream& cout, Complex& c);
	friend istream& operator >> (istream& cin, Complex& c);
	friend Complex operator+(Complex& c1, Complex& c2);
	friend Complex operator*(Complex& c1, Complex& c2);
public:
	Complex() { real = 0; img = 0; }
	Complex(double Real, double Img)//带参构造函数
	{
		real = Real;
		img = Img;
	}
	Complex(double Real)//转换构造函数
	{
		real = Real;
		img = 0;
	}
	Complex& operator-(Complex& c)
	{
		Complex temp;
		temp.img = this->img - c.img;
		temp.real = this->real - c.real;
		return temp;
	}
	Complex& operator/(Complex& c)
	{
		Complex temp;
		temp.real = (this->real * c.real + this->img * c.img) / (c.real * c.real + c.img * c.img);
		temp.img = -(this->real * c.img - c.real * this->img) / (c.real * c.real + c.img * c.img);
		return temp;
	}
	Complex operator++(int)//int表示一个占位符，表示是一个后置++
	{
		Complex temp = *this;//先运算
		real++;//再加
		img++;
		return temp;//最后返回到加了后的结果
	}
	Complex& operator--()//前置--
	{
		real--;//先减
		img--;
		return *this;//返回到引用
	}
private:
	double real;
	double img;
};
ostream& operator<<(ostream& out, Complex& c)//>>号重载
{
	out << "real=" << c.real << "  img=" << c.img << endl;
	out << c.real << "+" << c.img << "i" << endl;
	return out;
}
istream& operator >> (istream& in, Complex& c)//<<号重载，以及cout的重载
{
	cout << "请输入实数部分的值: " << endl;
	in >> c.real;
	cout << "请输入虚数部分的值:" << endl;
	in >> c.img;
	return in;
}
Complex operator+(Complex& c1, Complex& c2)//加号重载
{
	Complex Temp;
	Temp.img = c1.img + c2.img;
	Temp.real = c1.real + c2.real;
	return Temp;
}
Complex operator*(Complex& c1, Complex& c2)//乘号重载
{
	Complex Temp;
	Temp.real = c1.real * c2.real - c1.img * c2.img;
	Temp.img = c1.real * c2.img + c1.img * c2.real;
	return Temp;
}
void test01()
{
	Complex c;
	cin >> c;//>>号重载的运用
	cout << c;//<<号重载，以及cout的重载的运用
	cout << "------------------------------------" << endl;
	cout << "--------以下部分为直接传参----------" << endl;
	cout << "------------------------------------" << endl;
	Complex c1(2, 4);
	Complex c2(1, 2);
	Complex c3 = c1 + c2;//加号重载的运用
	cout << "加法复数的运算结果为:" << c3;
	Complex c4 = c1 * c2;
	cout << "乘法复数的运算结果为:" << c4;
	Complex c5 = c1 - c2;
	cout << "减法复数的运算结果为:" << c5;
	Complex c6 = c1 / c2;
	cout << "除法复数的运算结果为:" << c6;
	Complex c7(2, 2);
	cout << "后置++运算符";
	cout << "后置++的运算结果为:" << c7++;
	Complex c8(2, 2);
	cout << "前置--运算符";
	cout << "前置--的运算结果为:" << --c8;
	Complex c9(2, 5);
	cout << "转换前为:" << c9;
	c9 = 8;
	cout << "转换后为:" << c9;
}
int main()
{
	test01();
	system("pause");
	return 0;
}