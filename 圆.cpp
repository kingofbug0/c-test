#include"iostream"
using namespace std;
class Circular
{
public:
	double r;
	double R, C, S;
	void CircularR()
	{
		R = r;
	}
	void CircularC()
	{
		C = 3.14159 * 2 * r;
	}
	void CircularS()
	{
		S=3.14159 * r * r;
	}
};
void test01()
{
	Circular c;
	cout << "������Բ�İ뾶:  ";
	cin >> c.r;
	c.CircularR();
	cout << "Բ�İ뾶Ϊ:  " << c.R << endl;
	c.CircularC();
	cout << "Բ���ܳ�Ϊ:  " << c.C << endl;
	c.CircularS();
	cout << "Բ�����Ϊ:  " << c.S << endl;
}
int main()
{
    test01();
	system("pause");
	return 0;
}

