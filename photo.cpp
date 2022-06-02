#include"iostream"
#include"fstream"
#include"string"
using namespace std;
void test01()
{
	ifstream ph("data.jpg", ifstream::in | ifstream::binary);//打开图片格式为jpg的文件 ph为自定义名称
	ph.seekg(0, ph.end);//seekg是seek get的缩写 对输出流的操作，还有一个seekp 是put 是输入流的缩写 定位到其结束位置 end表示其结束位置
	int len = ph.tellg();//这里是获取流指针的函数
	ph.seekg(0, ph.beg);//beg表示其起始位置，移动到文件的开始位置
	char* buffer = new char[len];//创建内存的缓存区
	ph.read(buffer, len);//打开文件
	if (!ph.is_open())//判断是否打开成功
	{
		cout << "文件打开失败" << endl;
		return;
	}
	ofstream ph1("data2.jpg", ofstream::out | ofstream::binary);//写入
	ph1.write(buffer, len / 2);//创建一个新的data2 获取其半幅图片 写入新的文件data2中
	delete[]buffer;
	ph.close();
	ph1.close();

}
int main()
{
	test01();
	system("pause");
	return 0;
}