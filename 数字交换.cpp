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
    cout << "a����ǰ��ֵΪ:  " << a << endl;
    cout << "b����ǰ��ֵΪ:  " << b << endl;
    mySwap(a, b);
    cout << "a�������ֵΪ:  " << a << endl;
    cout << "b�������ֵΪ:  " << b << endl;
}
int main()
{
    test01();
	system("pause");
	return 0;
}

