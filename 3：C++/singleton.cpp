//#include <iostream>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//class Point
//{
//private:
//	int m_x;
//	int m_y;
//	//构造函数私有，保证外部不能创建对象。
//	Point()
//	{
//
//	}
//
//public:
//	static Point& getInstance(int x=0,int y=0)
//	{
//		static Point point_instance;		                //创建静态的Point对象。
//		point_instance.m_x = x;
//		point_instance.m_y = y;
//		return point_instance;							//把静态的实例对象返回。
//	}
//
//	//删除复制相关的函数。
//	Point(const Point &) = delete;                     	//删除拷贝构造函数。
//	Point &operator=(const Point &) = delete;              //删除复制运算符函数。
//};
//
//
//
//
////实现将Point类型的单例对象创建在堆区的写法，并完善
////（1）需要提供回收单例对象的方法
////（2）需要灵活使用单例对象，让单例对象的数据成员可以有不同的值
//
//class Point
//{
//private:
//	static Point *m_p;
//	int m_x;
//	int m_y;
//	Point()
//	{
//
//	}
//
//public:
//	Point *getinstance()
//	{
//		//这里增加逻辑判断，是为了防止多线程同时进入函数，相当于加锁。
//		if (m_p == nullptr)
//		{
//			Point *m_p = new Point{};
//		}
//	
//		return m_p;
//	}
//
//	void change_value(int x,int y)
//	{
//		if (m_p != nullptr)
//		{
//			m_x = x;
//			m_y = y;
//		}
//	}
//
//	//提供一个static函数释放资源
//	static void release()
//	{
//		if (m_p != nullptr)
//		{
//			delete m_p;
//			m_p = nullptr;
//		}
//	}
//
//	Point(const Point &) = delete;
//	Point &operator=(const Point &) = delete;
//};
////static静态变量，需要在类外进行初始化。
//Point * Point::m_p = nullptr;
//
//
//int main_2(int argc,char *argv[])
//{
//	//实现将Point类型的单例对象创建在静态区的写法，并理解
//	return 0;
//}