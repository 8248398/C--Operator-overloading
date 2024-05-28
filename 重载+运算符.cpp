//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	person operator+(person& p)
//	{
//		person temp;
//		temp.a = this->a + p.a;
//		temp.b = this->b + p.b;
//		return temp;
//	}
//	int a;
//	int b;
//};
////person operator+(person& p1, person& p2)
////{
////	person temp;
////	temp.a = p2.a + p1.a;
////	temp.b = p2.b + p1.b;
////	return temp;
////}
//person operator+(person& p1, int n)
//{
//	person temp;
//	temp.a = n + p1.a;
//	temp.b = n + p1.b;
//	return temp;
//}
//void test1()
//{
//	person p1;
//	p1.a = 10;
//	p1.b = 10;
//	person p2;
//	p2.a = 10;
//	p2.b = 10;
//	person p3 = p1 + 100;
//	person p4 = p1 + p2;
//	cout << p3.a << p3.b << endl;
//	cout << p4.a << p4.b << endl;
//}
//
//int main()
//{
//	test1();
//	return 0;
//}