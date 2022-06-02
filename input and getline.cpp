#include"iostream"
#include"fstream"
#include"string"
using namespace std;
void test01()
{
	ofstream ofs;
	int i = 0;
	ifstream data;
	data.open("data.txt");
	string line;
	if (data.is_open())
	{
		while (getline(data, line))
		{
			++i;
			cout << i << ".";
			cout << line<<endl;
		}
	}
	cout << "¹²ÓĞ:" << i<< "ĞĞ" << endl;
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}