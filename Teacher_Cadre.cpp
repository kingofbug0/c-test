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
		cout << "����:" << Name << "  �Ա�:" << Sex << "  ����:" << Age << "  �绰:" << Phone << "  ��ַ:" << Address << "  ְ��:" << Title << endl;
	}
	~Teacher()
	{

	}
	string Title;//ְ��
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
	string Post;//ְ��
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
			display("����", "��", 35, 1234651111, "��������", "1");
			cout << "ְ��:" << Post << "  ����:" << Wage << endl;
		}
	
	double Wage;//����
};
void test01()
{
	Teacher_Cadre c("����", "��", 35, 1234651111, "��������", "����", "Ժ��", 8000);
	c.Show("Ժ��", 8000);
}
int main()
{
	test01();
	system("pause");
	return 0;
}