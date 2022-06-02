#include<iostream>
#include<string>
using namespace std;
class aircraft
{
public:
	virtual void refual() {}//普通虚函数 加油
	virtual void fly() = 0;//纯虚函数  飞行
};
class airliner :public aircraft//民航飞机
{
public:
	virtual void refual()
	{
		cout << "民航飞机普通航空燃油" << endl;
	}
	virtual void fly()
	{
		cout << "民航飞机正在飞行" << endl;
	}
};
class fighter :public aircraft//战斗机
{
public:
	virtual void refual()
	{
		cout << "战斗飞机燃油" << endl;
	}
	virtual void fly()
	{
		cout << "战斗飞机正在飞行" << endl;
	}
};
class bomber :public aircraft//轰炸机
{
public:
	virtual void refual()
	{
		cout << "轰炸机燃油" << endl;
	}
	virtual void fly()
	{
		cout << "轰炸机实弹飞行" << endl;
	}
};
class helicopter :public aircraft//直升机
{
public:
	virtual void refual()
	{
		cout << "通用型燃油" << endl;
	}
	virtual void fly()
	{
		cout << "直升机正在盘旋" << endl;
	}
};
class hotAirBalloon:public aircraft//热气球
{
public:
	virtual void refual()
	{
		cout << "普通燃油" << endl;
	}
	virtual void fly()
	{
		cout << "热气球正在漂浮" << endl;
	}
};
class polit
{
public:
	void refuelAircraft(aircraft* p)
	{
		cout << "正在加:";
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