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
	cout << "请输入圆的半径:  ";
	cin >> c.r;
	c.CircularR();
	cout << "圆的半径为:  " << c.R << endl;
	c.CircularC();
	cout << "圆的周长为:  " << c.C << endl;
	c.CircularS();
	cout << "圆的面积为:  " << c.S << endl;
}
int main()
{
    test01();
	system("pause");
	return 0;
}

