#include<iostream>
#include<string>
using namespace std;
class Bank;//��������
class CreditCooperative;
class CommercialBank;
class Person
{
public:
	Person();
	void totalBalance();
	double P_balance;
	Bank *bank1;//����һ������ָ��
	CreditCooperative *bank2;
	CommercialBank *bank3;
};
class Bank//���ʵ��
{
	friend void Person::totalBalance();//��Person�ڵ�totalBalance����������Ԫ����
public:
	Bank();//�������캯��
	void setMoney(double Money)//�������
	{
		Balance = Money;
	}
	void bank()
	{
		cout << "�й��������еĴ��Ϊ:  " << Balance << endl;
	}
private:
	double Balance;//����˽�б���
};
Bank::Bank()//�Ƚ�����ʼ��
{
	Balance = 0;
}
class CreditCooperative
{
	friend void Person::totalBalance();
public:
	CreditCooperative();
	void C_setMoney(double Money)
	{
		Balance = Money;
	}
	void C_bank()
	{
		cout << "������Ĵ��Ϊ:" << Balance << endl;
	}
private:
	double Balance;
};
CreditCooperative::CreditCooperative()
{
	Balance = 0;
}
class CommercialBank
{
	friend void Person::totalBalance();
public:
	CommercialBank();
	void CB_setMoney(double Money)
	{
		Balance = Money;
	}
	void CB_bank()
	{
		cout << "������Ĵ��Ϊ:" << Balance << endl;
	}
private:
	double Balance;
};
CommercialBank::CommercialBank()
{
	Balance = 0;
}
Person::Person()//Person���캯��������ʵ��
{
	bank1 = new Bank;//ʹbank1��Bank���д���һ���µĿռ�
	bank2 = new CreditCooperative;//ʹbank2��CreditCooperative���д���һ���µĿռ�
	bank3 = new CommercialBank;//ʹbank3��CommercialBank���д���һ���¿ռ�
}
void Person::totalBalance()//Person���е�totalBalance��������ʵ��
{
	bank1->setMoney(200);//bank1ָ��Bank�е��������������д��Σ�
	bank1->bank();//bank1ָ��Bank���е���ʾ�ڸ������е���
	bank2->C_setMoney(200);
	bank2->C_bank();
	bank3->CB_setMoney(300);
	bank3->CB_bank();
	cout << "�����Ϊ:" << bank1->Balance + bank2->Balance + bank3->Balance << endl;//�����ļ���
}

void test01()
{
	Person p;
	Bank b;
	p.totalBalance();//����Person�еĳ�Ա����
}
int main()
{
	test01();
	system("pause");
	return 0;
}