//#include <iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//class Point
//{
//	//属性
//private:
//	int m_x;
//	int m_y;
//
//	//行为
//public:
//	//构造函数
//	Point()
//	{
//		cout << "Point()" << endl;
//	}
//	Point(int x, int y)
//	{
//		cout << "Point(int,int)" << endl;
//		m_x = x;
//		m_y = y;
//	}
//
//
//	//析构函数
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	//对外接口
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	void point()
//	{
//		cout << m_x << " " << m_y << endl;
//	}
//};
//
//void test1()
//{
//	Point pt;			//变量创建时，调用无参构造函数。
//	pt.point();			
//	cout << "-----------" << endl;
//
//	Point pt2(1, 2);		//调用两参构造函数。
//	pt2.point();
//	cout << "-----------" << endl;
//
//	//注意：调用无参的时候，不能使用()。
//	//另外，()也可以换成{ }
//	Point pt3{6,7};
//	pt3.point();
//}
//
//
//
//int main_1(int argc, char **argv)
//{
//	test1();
//
//	return 0;
//}
//
//
//
//
//
//
//
//
//
