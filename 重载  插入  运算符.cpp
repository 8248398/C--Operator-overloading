#include <iostream>
using namespace std;
class person
{
public:

	int a;
	int b;
};
ostream& operator<<(ostream& cout, person& p)
{
	cout << p.a << p.b;
	return cout;
}
void test2()
{
	person p;
	p.a = 10;
	p.b = 10;
	cout << p << endl;
}
int main2()
{
	test2();
	return 0;
}


