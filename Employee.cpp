#include"iostream"
#include"string"
using namespace std;
class Date
{
public:
	Date(){}
	Date(int Y,int M,int D):y(Y),m(M),d(D){}
	void setDate()
	{
		cout << "�����������:";
		cin >> y;
		cout << "�����������:";
		cin >> m;
		cout << "�����������:";
		cin >> d;
	}
	int y, m, d;
};
class Employee
{
public:
	Employee(){}
	Employee(string name, int id, int level, double wages) :date(date.y, date.m, date.d), wages(0), level(1), Name(name), ID(id)
	{
		cout << "Ա������: ";
		cin >> Name;
		cout << "Ա��ID:";
		cin >> ID;
	}
	Date date;
	string Name;
	int ID;
	int level;
	double wages;

};
class Manager :virtual public Employee
{
public:
	Manager(){}
	Manager(string name,int id,int level, double wages,double fixer_salary):Employee(name,id,level,wages),date(date.y, date.m, date.d),Level(4), Fixed_salary(8000)
	{
		wages = Fixed_salary;
		level = Level;
	}
	void Payday()//�麯����ʵ��
	{
		wages = Fixed_salary;
		level = Level;//�ȼ����
	}
	void show()//�麯����ʵ��
	{
		date.setDate();
		cout << "��������:" << Name << "  ����ID:" << ID << "  ������:" << level << "��" << "  н��:" << wages << endl;
		cout << "���ĳ�������Ϊ:" << date.y <<"��" << date.m<<"��" << date.d<<"��" << endl;
	}
	double Fixed_salary;
	int Level;
	Date date;
};
class Technician :virtual public Employee
{
public:
	Technician(){}
	Technician(string name,int id,double wages, double Worktime, double time_salary, int level):Employee(name, id, level, wages), date(date.y, date.m, date.d), time_salary(100),Level(3)
	{
		cout << "(����СʱΪ��λ)�ù�����Ա������ʱ����:";
		cin >> worktime;
	}
	void Payday()
	{
		wages = time_salary * worktime;
		level = Level;
	}
	void show()
	{
		date.setDate();
		cout << "������Ա����:" << Name << "  ������ԱID:" << ID << "  ������Ա����:" << level << "��" << "  н��:" << wages << endl;
		cout << "���ĳ�������Ϊ:" << date.y << "��" << date.m << "��" << date.d << "��" << endl;
	}
	Date date;
	double worktime;
	double time_salary;
	int Level;
};
class Salesman :virtual public Employee
{
public:
	Salesman(){}
	Salesman(string name, int id, double wages, double salesvolume):Employee(name, id, level, wages), date(date.y, date.m, date.d)
	{
	}
	void Payday()
	{
		cout << "��Ա�������۶�Ϊ:";
		cin >> salesvolume;
		wages = salesvolume * 0.04;
	}
	void show()
	{
		date.setDate();
		cout << "������Ա����:" << Name << "  ������ԱID:" << ID << "  ������Ա����:" << level << "��" << "  н��:" << Salesman::wages << endl;
		cout << "���ĳ�������Ϊ:" << date.y << "��" << date.m << "��" << date.d << "��" << endl;
	}
	Date date;
	double salesvolume;//���۶�
	~Salesman()
	{

	}
};
class Salesmanager :public Manager,public Salesman
{
public:
	Salesmanager(){}
	Salesmanager(string name, int id, double wages, int level,double Sm_salesvolume):Employee(name, id, level, wages), Salesman(name,id,wages,salesvolume),Manager(name,id,level,wages,Fixed_salary),date(date.y, date.m, date.d),Level(3),Month_Pay(5000)
	{
	
	}
	void Payday()
	{
		cout << "�������Ӫ���������۽��:";
		cin >> Sm_salesvolume;
		wages = Sm_salesvolume * 0.05 + Month_Pay;//н�ʼ���
		level = Level;
	}
	void show()
	{
		date.setDate();
		cout << "���۾�������:" << Name << "  ���۾���ID:" << ID << "  ���۾�����:" << level << "��" << "  н��:" << wages << endl;
		cout << "���ĳ�������Ϊ:" << date.y << "��" << date.m << "��" << date.d << "��" << endl;
	}
	Date date;
	int Level;
	double Month_Pay;
	double Sm_salesvolume;
};
void test01()
{
	
	Manager m1("����",0,0,0,0);//��Ϣ��ʼ��һ��
	m1.Payday();
	m1.show();
	Technician t1("������Ա",0,0,0,0,0);
	t1.Payday();
	t1.show();
	Salesman s1("����Ա",0,0,0);
	s1.Payday();
	s1.show();
	Salesmanager sm1("���۾���",0,0,0,0);
	sm1.Payday();
	sm1.show();

}
int main()
{
	test01();
	system("pause");
	return 0;
}