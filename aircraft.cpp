#include<iostream>
#include<string>
using namespace std;
class aircraft
{
public:
	virtual void refual() {}//��ͨ�麯�� ����
	virtual void fly() = 0;//���麯��  ����
};
class airliner :public aircraft//�񺽷ɻ�
{
public:
	virtual void refual()
	{
		cout << "�񺽷ɻ���ͨ����ȼ��" << endl;
	}
	virtual void fly()
	{
		cout << "�񺽷ɻ����ڷ���" << endl;
	}
};
class fighter :public aircraft//ս����
{
public:
	virtual void refual()
	{
		cout << "ս���ɻ�ȼ��" << endl;
	}
	virtual void fly()
	{
		cout << "ս���ɻ����ڷ���" << endl;
	}
};
class bomber :public aircraft//��ը��
{
public:
	virtual void refual()
	{
		cout << "��ը��ȼ��" << endl;
	}
	virtual void fly()
	{
		cout << "��ը��ʵ������" << endl;
	}
};
class helicopter :public aircraft//ֱ����
{
public:
	virtual void refual()
	{
		cout << "ͨ����ȼ��" << endl;
	}
	virtual void fly()
	{
		cout << "ֱ������������" << endl;
	}
};
class hotAirBalloon:public aircraft//������
{
public:
	virtual void refual()
	{
		cout << "��ͨȼ��" << endl;
	}
	virtual void fly()
	{
		cout << "����������Ư��" << endl;
	}
};
class polit
{
public:
	void refuelAircraft(aircraft* p)
	{
		cout << "���ڼ�:";
		p->refual();
	}
	void dirveAircraft(aircraft* p)
	{
		p->fly();
	}

};
void test01()
{
	aircraft* H6K = new bomber;
	aircraft* WZ10 = new helicopter;
	polit Jack;
	Jack.refuelAircraft(H6K);
	Jack.dirveAircraft(H6K);
	Jack.refuelAircraft(WZ10);
	Jack.dirveAircraft(WZ10);
}
int main()
{
	test01();
	system("pause");
	return 0;

}