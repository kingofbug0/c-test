#include"iostream"
using namespace std;
#include"string"
template<typename T>
T maximum(T n)
{
	return n;
}
template<typename T1, typename T2>
auto myMAX(T1 x, T2 y)->decltype(x > y ? x : y) { return x > y ? x : y; }
const char* myMAX(const char* x, const char* y)
{
	return strcmp(x, y) > 0 ? x : y;
}
template<typename T, typename... Args>//±ä²ÎÄ£°å
T maximum(const T n, const Args ...args)
{
	return myMAX(n, maximum(args...));
}
void test01()
{
	cout << maximum(60, 57, 50, 12, 80) << endl;
	cout << maximum('H', 'M', 'N', 'G') << endl;
	string s1 = "chinese", s2 = "china", s3 = "Chongqing";
	cout << maximum(s1, s2, s3) << endl;
	cout << maximum("chinese", "china", "Chongqing") << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}