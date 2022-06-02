#include"iostream"
#include"cassert"
using namespace std;
template<class T>
class m_Queue
{
public:
	int front, rear;
	T* element;
	int maxsize;
	m_Queue(int n = 10000 );
	~m_Queue()
	{
		delete[]element;
	}
	void PushBack(T item);
	T popFront();
	void clear()
	{
		front = rear = 0;
	}
	bool Empty()
	{
		return front == rear;
	}
	bool Full()
	{
		return (rear + 1) % maxsize == front;
	}
	int length()
	{
		return (rear - front + maxsize) % maxsize;
	}
};
template<class t>
m_Queue<t>::m_Queue(int n)
{
	front = 0;
	rear = 0;
	maxsize = n;
	element = new t[maxsize];
}

template<class T>
void m_Queue<T>::PushBack(T item)
{
	assert(!Full());
	rear = (rear + 1) % maxsize;
	element[rear] = item;
}

template<class T>
T m_Queue<T>::popFront()
{
	assert(!Empty());
	front = (front + 1) % maxsize;
	return element[front];
}

int main()
{
	m_Queue<int>test(10);
	int i;
	for (i = 1; i <= 9; i++)
	{
		test.PushBack(i);
	}
	for (i = 1; i <= 9; i++)
		cout << test.popFront() << "";
		cout << endl;
	system("pause");
	return 0;
}