#include <iostream>
using namespace std;
class person
{
public:
	int operator()(int a,int b)
	{
		return a + b;
	}
};
void test()
{
	person p;
	int b = p(100,200);
	cout << b << endl;
}
int main()
{
	test();
	//匿名函数对象
	cout << person()(100, 100) << endl;
	return 0;
}