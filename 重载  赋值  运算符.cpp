//#include <iostream >
//using namespace std;
//class person
//{
//public:
//	person(int age) 
//	{
//		a = new int(age);
//	}
//	~person()
//	{
//		if (a != NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//	}
//	person(person& p)
//	{
//		a = new int(*p.a);
//	}
//	person& operator=(person& p)
//	{
//		if (a != NULL)
//		{
//			delete a;
//			a = NULL;
//		}
//		a = new int(*p.a);
//		return *this;
//	}
//	int *a;
//};
//void test1()
//{
//	person p1(18);
//	person p2(20);
//	p2 = p1;
//	cout << *p1.a << endl;
//	cout << *p2.a << endl;
//	//person p2 =p1 相当于person p2 = person (p1) 调用深拷贝
//	//而person p2; p2 =p1;没有使用拷贝函数
//	person p3(30);
//	p3 = p2 = p1;
//	cout << *p3.a << endl;
//}
//
//int main()
//{
//	test1();
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//c = b = a;
//	//cout << a << b << c << endl;//都等于10
//	return 0;
//}