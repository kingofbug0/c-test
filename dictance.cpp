#include"iostream"
#include"string"
using namespace std;
class Location
{
public:
	int setx1(int A)
	{
		a = A;
		return a;
	}
	int sety1(int B)
	{
		b = B;
		return b;
	}
	int setx2(int C)
	{
		c= C;
		return c;
	}
	int sety2(int D)
	{
		d = D;
		return d;
	}
	int Location2(int a,int b)//象限计算
	{
		return a * a - 2 * a * b + b * b;
	}
		int a, b, c, d;
};
void test01()
{
	Location B,A;//A第3象限，B第二象限
	B.setx1(-4);
	B.sety1(3);
	A.setx2(-4);
	A.sety2(-3);
	int a, b;
	a=A.Location2(A.setx2(-4), B.setx1(-4));
	b=B.Location2(A.sety2(-3), B.sety1(3));
	cout << "A:" << A.Location2(A.setx2(-4), B.setx1(-4))<< "B:" << B.Location2(A.sety2(-3), B.sety1(3)) << endl;
	cout << "AB两点相距:" << sqrt((double)(a+b)) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}