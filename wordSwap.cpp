#include"iostream"
#include"string"
#include<algorithm>
#include"vector"
using namespace std;
void test01()
{
	string Word[5] = {"Germany", "Japan", "America", "Britain", "France"};
	cout << "δת��ʱ:";
	for (int i = 0; i < 5; i++)
	{
		cout << Word[i]<<" ";
	}
	cout << endl;
	cout << "ת�ú�:";
	for (int i = 4; i >= 0; i--)
	{
		
		cout << Word[i]<<" ";
	}
	cout << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
