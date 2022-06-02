#include"iostream"
#include"string"
using namespace std;
class Country
{
public:
	void Information()
	{
		cout << "国家:" << Contryname << "  首都:" << Center << "  首都人口:" << n_People <<"万人" << endl;
	}
	string Contryname = "中国";
	string Center = "北京";
	double n_People = 2019;
};
class province :public Country
{
public:
	void ProvincialCapital()
	{
		cout << "省会城市是:" << m_ProvincialCapital << endl;
	}
	void num_People()
	{
		cout << "该省会的人口是:" << Num_People <<"万人" << endl;
	}
	string m_ProvincialCapital = "贵阳";
	double Num_People = 600;
};
class A_province :public Country//另一个城市
{
public:
	void ProvincialCapital()
	{
		cout << "省会城市是:" << A_m_ProvincialCapital << endl;
	}
	void num_People()
	{
		cout << "该省会的人口是:" << A_Num_People << "万人" << endl;
	}
	string A_m_ProvincialCapital = "重庆";
	double A_Num_People = 3205.42;
};
void test01()
{
	province p;
	A_province q;
	p.Information();
	p.ProvincialCapital();
	p.num_People();
	q.Information();
	q.ProvincialCapital();
	q.num_People();
}
int main()
{
	test01();
	system("pause");
	return 0;
}