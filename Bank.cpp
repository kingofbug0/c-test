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
	void getBalance();//��ȡ���
	void Deposit();//���
	void Withdrawl();//ȡ��
private:
	int ID;	
};
void Acoount::getBalance()
{
	cout << "����ǰ�����Ϊ:" << Balance << "Ԫ" << endl;
}
void Acoount::Deposit()
{
	int deposit;
	cout << "�������룺";
	cin >> deposit;
	cout << "���ɹ�!" << endl;
	Balance = deposit + Balance;
	getBalance();
}

void Acoount::Withdrawl()
{
	int withdrawl;
	cout << "����ȡ��:";
	cin >> withdrawl; 
	if (Balance < withdrawl)
	{
		cout << "��ǰ���㣡" << endl;
	}
	else
	{
		cout << "���ѳɹ�ȡ��:" << withdrawl << "Ԫ" << endl;
		Balance = Balance - withdrawl;
		getBalance();
	}
}

void test01()
{
	Acoount a;
	a.Balance = 2000;
	a.setID(255806);
	cout << "�˻�:" << a.getID() << endl;
	a.getBalance();
	a.Deposit();
	a.Withdrawl();
	Acoount b;
	b.Balance = 500;
	b.setID(30058);
	cout << "�˻�:" << b.getID() << endl;
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