#include"iostream"
#include"string"
using namespace std;
class Country
{
public:
	void Information()
	{
		cout << "����:" << Contryname << "  �׶�:" << Center << "  �׶��˿�:" << n_People <<"����" << endl;
	}
	string Contryname = "�й�";
	string Center = "����";
	double n_People = 2019;
};
class province :public Country
{
public:
	void ProvincialCapital()
	{
		cout << "ʡ�������:" << m_ProvincialCapital << endl;
	}
	void num_People()
	{
		cout << "��ʡ����˿���:" << Num_People <<"����" << endl;
	}
	string m_ProvincialCapital = "����";
	double Num_People = 600;
};
class A_province :public Country//��һ������
{
public:
	void ProvincialCapital()
	{
		cout << "ʡ�������:" << A_m_ProvincialCapital << endl;
	}
	void num_People()
	{
		cout << "��ʡ����˿���:" << A_Num_People << "����" << endl;
	}
	string A_m_ProvincialCapital = "����";
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