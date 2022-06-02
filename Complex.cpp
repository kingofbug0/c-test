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
	Complex(double Real, double Img)//���ι��캯��
	{
		real = Real;
		img = Img;
	}
	Complex(double Real)//ת�����캯��
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
	Complex operator++(int)//int��ʾһ��ռλ������ʾ��һ������++
	{
		Complex temp = *this;//������
		real++;//�ټ�
		img++;
		return temp;//��󷵻ص����˺�Ľ��
	}
	Complex& operator--()//ǰ��--
	{
		real--;//�ȼ�
		img--;
		return *this;//���ص�����
	}
private:
	double real;
	double img;
};
ostream& operator<<(ostream& out, Complex& c)//>>������
{
	out << "real=" << c.real << "  img=" << c.img << endl;
	out << c.real << "+" << c.img << "i" << endl;
	return out;
}
istream& operator >> (istream& in, Complex& c)//<<�����أ��Լ�cout������
{
	cout << "������ʵ�����ֵ�ֵ: " << endl;
	in >> c.real;
	cout << "�������������ֵ�ֵ:" << endl;
	in >> c.img;
	return in;
}
Complex operator+(Complex& c1, Complex& c2)//�Ӻ�����
{
	Complex Temp;
	Temp.img = c1.img + c2.img;
	Temp.real = c1.real + c2.real;
	return Temp;
}
Complex operator*(Complex& c1, Complex& c2)//�˺�����
{
	Complex Temp;
	Temp.real = c1.real * c2.real - c1.img * c2.img;
	Temp.img = c1.real * c2.img + c1.img * c2.real;
	return Temp;
}
void test01()
{
	Complex c;
	cin >> c;//>>�����ص�����
	cout << c;//<<�����أ��Լ�cout�����ص�����
	cout << "------------------------------------" << endl;
	cout << "--------���²���Ϊֱ�Ӵ���----------" << endl;
	cout << "------------------------------------" << endl;
	Complex c1(2, 4);
	Complex c2(1, 2);
	Complex c3 = c1 + c2;//�Ӻ����ص�����
	cout << "�ӷ�������������Ϊ:" << c3;
	Complex c4 = c1 * c2;
	cout << "�˷�������������Ϊ:" << c4;
	Complex c5 = c1 - c2;
	cout << "����������������Ϊ:" << c5;
	Complex c6 = c1 / c2;
	cout << "����������������Ϊ:" << c6;
	Complex c7(2, 2);
	cout << "����++�����";
	cout << "����++��������Ϊ:" << c7++;
	Complex c8(2, 2);
	cout << "ǰ��--�����";
	cout << "ǰ��--��������Ϊ:" << --c8;
	Complex c9(2, 5);
	cout << "ת��ǰΪ:" << c9;
	c9 = 8;
	cout << "ת����Ϊ:" << c9;
}
int main()
{
	test01();
	system("pause");
	return 0;
}