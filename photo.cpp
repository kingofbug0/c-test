#include"iostream"
#include"fstream"
#include"string"
using namespace std;
void test01()
{
	ifstream ph("data.jpg", ifstream::in | ifstream::binary);//��ͼƬ��ʽΪjpg���ļ� phΪ�Զ�������
	ph.seekg(0, ph.end);//seekg��seek get����д ��������Ĳ���������һ��seekp ��put ������������д ��λ�������λ�� end��ʾ�����λ��
	int len = ph.tellg();//�����ǻ�ȡ��ָ��ĺ���
	ph.seekg(0, ph.beg);//beg��ʾ����ʼλ�ã��ƶ����ļ��Ŀ�ʼλ��
	char* buffer = new char[len];//�����ڴ�Ļ�����
	ph.read(buffer, len);//���ļ�
	if (!ph.is_open())//�ж��Ƿ�򿪳ɹ�
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	ofstream ph1("data2.jpg", ofstream::out | ofstream::binary);//д��
	ph1.write(buffer, len / 2);//����һ���µ�data2 ��ȡ����ͼƬ д���µ��ļ�data2��
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