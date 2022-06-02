#include"iostream"
#include"string"
using namespace std;
class Employee
{
public:
	Employee(){}
	Employee(string name, string sex, int age, int phone, string add):Name(name),Age(age),Sex(sex),Address(add),Phone(phone){}
	~Employee()
	{

	}
	string Name;
	int Age;
	string Sex;
	string Address;
	int Phone;
};
class Teacher:virtual public Employee
{
public:
	Teacher(){}
	Teacher(string name, string sex, int age, int phone, string add, string title) :Employee(name, sex, age, phone, add), Title(title){}
	void display(string name, string sex, int age, int phone, string add, string title)
	{
		cout << "名字:" << Name << "  性别:" << Sex << "  年龄:" << Age << "  电话:" << Phone << "  地址:" << Address << "  职称:" << Title << endl;
	}
	~Teacher()
	{

	}
	string Title;//职称
};
class Cadre :virtual public Employee
{
public:
	Cadre() {};
	Cadre(string name, string sex, int age, int phone, string add, string post):Employee(name, sex, age, phone, add),Post(post)
	{}
	~Cadre()
	{

	}
	string Post;//职务
};
class Teacher_Cadre :public Teacher, public Cadre
{
public:
	Teacher_Cadre() {};
	Teacher_Cadre(string name, string sex, int age, int phone, string add, string title, string post, double wage) :Teacher(name,sex,age,phone,add,title),Employee(name, sex, age, phone, add), Cadre(name, sex, age, phone, add, post), Wage(wage)
	{}
	~Teacher_Cadre()
	{

	}
		void Show(string post,double wage)
		{
			display("张三", "男", 35, 1234651111, "重庆永川", "1");
			cout << "职务:" << Post << "  工资:" << Wage << endl;
		}
	
	double Wage;//工资
};
void test01()
{
	Teacher_Cadre c("张三", "男", 35, 1234651111, "重庆永川", "教授", "院长", 8000);
	c.Show("院长", 8000);
}
int main()
{
	test01();
	system("pause");
	return 0;
}