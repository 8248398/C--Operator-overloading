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
//	//person p2 =p1 �൱��person p2 = person (p1) �������
//	//��person p2; p2 =p1;û��ʹ�ÿ�������
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
//	//cout << a << b << c << endl;//������10
//	return 0;
//}