#include"iostream"
#include"string"
using namespace std;
class airCondition
{
public:
	char* Brand = (char*)0;//指针初始化，指向一个初始值
	string Color;
	string Power;
	bool Switch;
	int Temperature;
	int Up;
	int Down;
	airCondition() {};
	void up()
	{
		if (Temperature < 20)
		{
			Temperature = 20;
			cout << "空调温度已自动上升至20度" << endl;
			cout << "当前空调温度为:" << Temperature << endl;
		}
	}
	void down()
	{
		if (Temperature > 20)
		{
			Temperature = 20;
			cout << "空调温度已自动下降至20度" << endl;
			cout << "当前空调温度为:" << Temperature << endl;
		}
	}
	void getInfo(string color, string power, bool Switch1, int Temp, char* m_brand)
	{
		this->Color = color;
		this->Power = power;
		this->Switch = Switch1;
		this->Temperature = Temp;
		Brand = new char[8];//使Brand指向一个新的地址，避免delete掉后，=和拷贝函数中数据为空
		strcpy(Brand, m_brand);//不能直接赋值，需要用strcpy拷贝过去
	}
	airCondition(const airCondition& a)//拷贝构造
	{
		Brand = new char[8];//重新规划内存指向一个新的内存，防止指针悬挂问题
		strcpy(Brand, a.Brand);
		this->Color = a.Color;
		this->Power = a.Power;
		this->Switch = a.Switch;
		this->Temperature = a.Temperature;
	}
	airCondition& operator=(const airCondition& a)
	{
		if (Brand != nullptr)//判断指针内容是否为空
		{
			delete[]Brand;//若不为空便delete掉
			Brand = nullptr;//指针指向空，防止出现野指针
		}
		Brand = new char[8];//再次指向一个新的内存 大小与之前相同
		strcpy(Brand,a.Brand);
		this->Color = a.Color;
		this->Power = a.Power;
		this->Switch = a.Switch;
		this->Temperature = a.Temperature;
		return *this;
	}
};
void test01()
{
	airCondition air1;
	air1.getInfo("白色", "2匹", true, 25, "格力");
	cout << "空调品牌:" << air1.Brand << endl;
	cout << "空调功率:" << air1.Power << endl;
	if (air1.Switch == true)
	{
		cout << "空调已启动" << endl;
	}
	else
	{
		cout << "空调已关闭" << endl;
	}
	cout << "空调温度:" << air1.Temperature << endl;
	air1.down();
	airCondition air2(air1);
	cout << "空调品牌:" << air1.Brand << endl;
	cout << "空调功率:" << air1.Power << endl;
	if (air1.Switch == true)
	{
		cout << "空调已启动" << endl;
	}
	else
	{
		cout << "空调已关闭" << endl;
	}
	cout << "空调温度:" << air1.Temperature << endl;
	air1.down();
	airCondition air3 = air1;
	cout << "空调品牌:" << air1.Brand << endl;
	cout << "空调功率:" << air1.Power << endl;
	if (air1.Switch == true)
	{
		cout << "空调已启动" << endl;
	}
	else
	{
		cout << "空调已关闭" << endl;
	}
	cout << "空调温度:" << air1.Temperature << endl;
	air1.down();
}
int main()
{
	test01();
	system("pause");
	return 0;
}