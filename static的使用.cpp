#include<iostream>
#include<string>
using namespace std;
class Socore
{
public:
	Socore()
	{
		double achi;
		cout << "当输入分数为负数时，结束统计" << endl;
		while (1)
		{
			cout << "请输入学生分数:";
			cin >> achi;
			if (achi < 0)
			{
				break;
			}
			Achi = achi;
			Sum += Achi;//因为在静态成员函数中，不能访问非静态成员函数变量，也不能调用非静态成员函数，所有在这里先做SUM的实现
			i++;
		}
	}
	static double Avg()
	{
		return Sum / i;//直接return到Avg
	}
	static double sum()
	{
		return Sum;//直接return到静态变量Sum
	}
	double Achi;
	static double Sum;
	static int i;//定义静态变量用于计算平均值
};
double Socore::Sum = 0;//静态成员变量初始化
int Socore::i = 0;
void test01()
{
	Socore s;
	s.Avg();
	cout << "总分为:" << s.sum() << endl;
	cout << "平均分为:" << s.Avg() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}