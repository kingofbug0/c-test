#include"iostream"
#include"string"
#include<algorithm>
#include"vector"
using namespace std;
class Student
{
public:
	int* m_ID;
	string* m_name;
	int *Achi;
	Student(const int id, const string name, const int achi)
		 
	{
		Achi = new int(achi);
		m_ID = new int(id);
		m_name = new string(name);
	}
	~Student()
	{

	}
};
//bool operator<(const Student& a, const Student& b)
//{
//	return a.m_achi < b.m_achi;
//}
bool Cmp(const Student& a, const Student& b)
{
	return a.Achi< b.Achi;
}
vector<Student>stu(const int num)
{
	vector<Student>v;
	Student s1(5894, "����", 50);
	Student s2(5799, "����", 67);
	Student s3(5800, "����", 78);
	Student s4(5801, "����", 45);
	Student s5(5805, "����", 68);
	v.push_back(s1);
	v.push_back(s2);
	v.push_back(s3);
	v.push_back(s4);
	v.push_back(s5);
	return v;
}
void Printf(vector<Student>&v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		cout << "ѧ�ţ�" << *v[i].m_ID << "����:  " << *v[i].m_name <<"�ɼ�:  " << *v[i].Achi << endl;
	}
}
//void test01()
//{
//	sort(v.begin(), v.end(),Cmp);
//	
//	/*for (int i=0;i<v.size();++i)
//	{
//		cout << "�ɼ�:  " << *v[i].m_achi << endl;
//	}
//	for (int i=0;i<v.size();++i)
//	{
//		cout << "ѧ�ţ�" << *v[i].m_ID<< "����:  " << *v[i].m_ID << "�ɼ�:  " << *v[i].m_achi << endl;
//	}*/
//
//}
int main()
{
	const int num = 5;
	vector<Student>v = stu(num);
	sort(v.begin(), v.end(), Cmp);
	Printf(v);
	system("pause");
	return 0;
}
