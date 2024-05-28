//#include <iostream>
//using namespace std;
//class person
//{
//	friend ostream& operator<<(ostream& cout, person p);
//public:
//	person()
//	{
//		a = 0;
//	}
//	person& operator--()
//	{
//		a--;
//		return *this;
//	}
//	person operator--(int)
//	{
//		person t = *this;
//		a--;
//		return t;
//	}
//private:
//	int a;
//};
//ostream& operator<<(ostream& cout, person p)
//{
//	cout << p.a;
//	return cout;
//}
//void test5()
//{
//	person p;
//	cout << --(--p) << endl;
//}
//void test6()
//{
//	person p;
//	cout << p-- << endl;
//	cout << p << endl;
//}
//
//int main4()
//{
//
//	test6();
//	return 0;
//}