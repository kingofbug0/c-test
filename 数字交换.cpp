#include"iostream"
using namespace std;
void mySwap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void test01()
{
    int a = 10;
    int b = 20;
    cout << "a交换前的值为:  " << a << endl;
    cout << "b交换前的值为:  " << b << endl;
    mySwap(a, b);
    cout << "a交换后的值为:  " << a << endl;
    cout << "b交换后的值为:  " << b << endl;
}
int main()
{
    test01();
	system("pause");
	return 0;
}

