#include<iostream>
#include<string>
using namespace std;
class Socore
{
public:
	Socore()
	{
		double achi;
		cout << "���������Ϊ����ʱ������ͳ��" << endl;
		while (1)
		{
			cout << "������ѧ������:";
			cin >> achi;
			if (achi < 0)
			{
				break;
			}
			Achi = achi;
			Sum += Achi;//��Ϊ�ھ�̬��Ա�����У����ܷ��ʷǾ�̬��Ա����������Ҳ���ܵ��÷Ǿ�̬��Ա��������������������SUM��ʵ��
			i++;
		}
	}
	static double Avg()
	{
		return Sum / i;//ֱ��return��Avg
	}
	static double sum()
	{
		return Sum;//ֱ��return����̬����Sum
	}
	double Achi;
	static double Sum;
	static int i;//���徲̬�������ڼ���ƽ��ֵ
};
double Socore::Sum = 0;//��̬��Ա������ʼ��
int Socore::i = 0;
void test01()
{
	Socore s;
	s.Avg();
	cout << "�ܷ�Ϊ:" << s.sum() << endl;
	cout << "ƽ����Ϊ:" << s.Avg() << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}