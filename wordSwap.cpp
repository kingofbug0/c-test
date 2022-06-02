#include"iostream"
#include"string"
#include<algorithm>
#include"vector"
using namespace std;
void test01()
{
	string Word[5] = {"Germany", "Japan", "America", "Britain", "France"};
	cout << "未转置时:";
	for (int i = 0; i < 5; i++)
	{
		cout << Word[i]<<" ";
	}
	cout << endl;
	cout << "转置后:";
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
