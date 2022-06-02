#include"iostream"
using namespace std;
#include"string"
using namespace std;
enum { EXCEPTION_1 = 1, EXCEPTION_2, EXCEPTION_3 };//enum是枚举 后面依次就是2 3
class CppException 
{
public:
	CppException() = default;
	CppException(int nReason) :reason(nReason){}
	~CppException() {}
	void Reason()
	{ 
		cout << "Exception:" << reason << endl; 
	}
private:
	int reason;
};
void Trigger() 
{
	throw new CppException(EXCEPTION_1);
}

int main()
{
	try 
	{
		Trigger();
	}
	catch (CppException* e) 
	{
		e->Reason();
	}
	return 0;
}
