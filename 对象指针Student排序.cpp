#include"iostream"
#include"string"
#include<algorithm>
using namespace std;
class Student
{
public:
	int m_ID;
	string m_name;
	int Achi;
	Student() {};
	void get_Student(const int id, const string name, const int achi)
	{
		Achi = achi;
		m_ID = id;
		m_name = name;
	}
	~Student()
	{

	}
};
bool Cmp(const Student a, const Student b)
{
	return a.Achi < b.Achi;
}

void test01()
{
	Student *s=new Student[5];
	s[0].get_Student(5799, "����", 67);
	s[1].get_Student(5899, "����", 77);
	s[2].get_Student(9799, "����", 57);
	s[3].get_Student(5599, "����", 87);
	s[4].get_Student(5499, "�����", 47);
	sort(s, s + 5, Cmp);
	for (int i = 0; i <= 4; i++)
	{
		cout << "ѧ�ţ�" << s->m_name << "����:  " << s->m_name << "�ɼ�:  " << s->Achi << endl;
		s++;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}