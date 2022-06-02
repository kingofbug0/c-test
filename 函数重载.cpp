#include"iostream"
using namespace std;
void Add(int a,int b)
{
	cout << a + b << endl;
}

void Add(double a, double b)
{
	cout << a + b << endl;
}

void Add(int a, int b, int c)
{
	cout << a + b + c << endl;
}
int main()
{
	Add(1.5,2.2);
	system("pause");
	return 0;
}