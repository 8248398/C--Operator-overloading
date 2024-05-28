//#include <iostream>
//using namespace std;
//class person
//{
//public:
//	friend ostream& operator<<(ostream& cout, person p);
//	person()
//	{
//		a = 0;
//		b = 0;
//	}
//	person& operator++()
//	{
//		a++;
//		return *this;
//		
//	}
//	person operator++(int)//int代表占位参数，可以区分前置和后置递增
//	{
//		person t;
//		t = *this;
//		a++;
//		return t;
//	}
//private:
//	int a;
//	int b;
//};
//ostream& operator<<(ostream& cout, person p)
//{
//	cout << p.a;
//	return cout;
//}
//void test3()
//{
//	person p;
//	cout << ++(++p) << endl;
//	cout << p << endl;
//}
//void test4()
//{
//	person p;
//	cout << (p++)++ << endl;
//	//cout << p++ << endl;
//	cout << p;
//}
//int main3()
//{
//	//test3();
//	test4();
//	return 0;
//}