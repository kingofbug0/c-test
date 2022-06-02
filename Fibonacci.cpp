#include"iostream"
using namespace std;
class Fibonacci
{
public:
    int n;
    int fib()
    {
            if (n < 2)
            {
                return n;
            }
            int q = 0, p = 1, sum = 1;
            for (int i = 2; i <= n; i++)
            {
                p = q;
                q =sum;
                sum = p + q;
            }
            return sum;
    }
};

int main()
{
    Fibonacci f;
    int* sum=new int;
    *sum = 0;
    for (f.n = 1; f.n <= 30; f.n++)
    {
        cout << "Fibonacci第"<< f.n <<"项的大小为:  " <<f.fib()<< endl;
    }
    for (f.n = 1; f.n <= 30; f.n++)
    {
        *sum = f.fib() + *sum;
    }
    cout << "Fibonacci的前30项之和为:  " << *sum << endl;
    if (sum != NULL)
    {
        delete sum;
        sum = NULL;
    }
	system("pause");
	return 0;
}