#include<iostream>
#include<string>
using namespace std;
class Bank;//先声明类
class CreditCooperative;
class CommercialBank;
class Person
{
public:
	Person();
	void totalBalance();
	double P_balance;
	Bank *bank1;//创建一个对象指针
	CreditCooperative *bank2;
	CommercialBank *bank3;
};
class Bank//类的实现
{
	friend void Person::totalBalance();//对Person内的totalBalance函数进行友元声明
public:
	Bank();//声明构造函数
	void setMoney(double Money)//设置余额
	{
		Balance = Money;
	}
	void bank()
	{
		cout << "中国人民银行的存款为:  " << Balance << endl;
	}
private:
	double Balance;//余额的私有保护
};
Bank::Bank()//先将余额初始化
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
		cout << "信用社的存款为:" << Balance << endl;
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
		cout << "信用社的存款为:" << Balance << endl;
	}
private:
	double Balance;
};
CommercialBank::CommercialBank()
{
	Balance = 0;
}
Person::Person()//Person构造函数的类外实现
{
	bank1 = new Bank;//使bank1在Bank类中创建一个新的空间
	bank2 = new CreditCooperative;//使bank2在CreditCooperative类中创建一个新的空间
	bank3 = new CommercialBank;//使bank3在CommercialBank类中创建一个新空间
}
void Person::totalBalance()//Person类中的totalBalance函数类外实现
{
	bank1->setMoney(200);//bank1指向Bank中的设置余额函数并进行传参；
	bank1->bank();//bank1指向Bank类中的显示在该银行中的余额；
	bank2->C_setMoney(200);
	bank2->C_bank();
	bank3->CB_setMoney(300);
	bank3->CB_bank();
	cout << "总余额为:" << bank1->Balance + bank2->Balance + bank3->Balance << endl;//总余额的计算
}

void test01()
{
	Person p;
	Bank b;
	p.totalBalance();//调用Person中的成员函数
}
int main()
{
	test01();
	system("pause");
	return 0;
}