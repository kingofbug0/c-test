#include"iostream"
using namespace std;
class Acoount
{
public:
	double Balance;
	void setID(int id)
	{
		ID=id;
	}
	int getID()
	{
		return ID;
	}
	void getBalance();//获取余额
	void Deposit();//存款
	void Withdrawl();//取款
private:
	int ID;	
};
void Acoount::getBalance()
{
	cout << "您当前的余额为:" << Balance << "元" << endl;
}
void Acoount::Deposit()
{
	int deposit;
	cout << "您将存入：";
	cin >> deposit;
	cout << "存款成功!" << endl;
	Balance = deposit + Balance;
	getBalance();
}

void Acoount::Withdrawl()
{
	int withdrawl;
	cout << "您将取款:";
	cin >> withdrawl; 
	if (Balance < withdrawl)
	{
		cout << "当前余额不足！" << endl;
	}
	else
	{
		cout << "您已成功取款:" << withdrawl << "元" << endl;
		Balance = Balance - withdrawl;
		getBalance();
	}
}

void test01()
{
	Acoount a;
	a.Balance = 2000;
	a.setID(255806);
	cout << "账户:" << a.getID() << endl;
	a.getBalance();
	a.Deposit();
	a.Withdrawl();
	Acoount b;
	b.Balance = 500;
	b.setID(30058);
	cout << "账户:" << b.getID() << endl;
	b.getBalance();
	b.Deposit();
	b.Withdrawl();
}
int main()
{
	
	test01();
	system("pause");
	return 0;
}