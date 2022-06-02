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
		cout << "请输入出生年:";
		cin >> y;
		cout << "请输入出生月:";
		cin >> m;
		cout << "请输入出生日:";
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
		cout << "员工姓名: ";
		cin >> Name;
		cout << "员工ID:";
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
	void Payday()//虚函数的实现
	{
		wages = Fixed_salary;
		level = Level;//等级变更
	}
	void show()//虚函数的实现
	{
		date.setDate();
		cout << "经理名字:" << Name << "  经理ID:" << ID << "  经理级别:" << level << "级" << "  薪资:" << wages << endl;
		cout << "他的出生年月为:" << date.y <<"年" << date.m<<"月" << date.d<<"日" << endl;
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
		cout << "(请以小时为单位)该工作人员工作的时间是:";
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
		cout << "技术人员名字:" << Name << "  技术人员ID:" << ID << "  技术人员级别:" << level << "级" << "  薪资:" << wages << endl;
		cout << "他的出生年月为:" << date.y << "年" << date.m << "月" << date.d << "日" << endl;
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
		cout << "该员工的销售额为:";
		cin >> salesvolume;
		wages = salesvolume * 0.04;
	}
	void show()
	{
		date.setDate();
		cout << "销售人员名字:" << Name << "  销售人员ID:" << ID << "  销售人员级别:" << level << "级" << "  薪资:" << Salesman::wages << endl;
		cout << "他的出生年月为:" << date.y << "年" << date.m << "月" << date.d << "日" << endl;
	}
	Date date;
	double salesvolume;//销售额
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
		cout << "请输入该营销部门所售金额:";
		cin >> Sm_salesvolume;
		wages = Sm_salesvolume * 0.05 + Month_Pay;//薪资计算
		level = Level;
	}
	void show()
	{
		date.setDate();
		cout << "销售经理名字:" << Name << "  销售经理ID:" << ID << "  销售经理级别:" << level << "级" << "  薪资:" << wages << endl;
		cout << "他的出生年月为:" << date.y << "年" << date.m << "月" << date.d << "日" << endl;
	}
	Date date;
	int Level;
	double Month_Pay;
	double Sm_salesvolume;
};
void test01()
{
	
	Manager m1("经理",0,0,0,0);//信息初始化一下
	m1.Payday();
	m1.show();
	Technician t1("技术人员",0,0,0,0,0);
	t1.Payday();
	t1.show();
	Salesman s1("销售员",0,0,0);
	s1.Payday();
	s1.show();
	Salesmanager sm1("销售经理",0,0,0,0);
	sm1.Payday();
	sm1.show();

}
int main()
{
	test01();
	system("pause");
	return 0;
}