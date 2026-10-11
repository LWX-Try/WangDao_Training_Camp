#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

//定义一个电脑类，使用构造函数，析构函数，赋值运算符函数，拷贝构造函数。
class Computer
{
	//属性
private:
	char     *m_brand;			//品牌
	double		m_price;			//价格

	//行为
public:
	//constructor：构造函数
	Computer(const char *brand, double price)
		:m_brand(new char[strlen(brand) + 1]{})
		,m_price(price)
	{
		strcpy(m_brand, brand);
		cout << "constructor function has finish." << endl;
	}

	//copy constructor：拷贝构造函数
	Computer(const Computer &rhs)
		:m_brand(new char[strlen(rhs.m_brand) + 1] {})
		,m_price(rhs.m_price)
	{

		strcpy(m_brand, rhs.m_brand);
		cout << "copy constructor function has finish." << endl;
	}

	//assignment operatot function：赋值运算符函数
	// 赋值运算符函数的四步写法：
	// 1：字符值判断，判断传入参数是否为自己。
	// 2：回收原本的资源。
	// 3：深拷贝。
	// 4：返回当前对象*this。
	Computer& operator=(const Computer &rhs)
	{
		if (this == &rhs)
		{
			return *this;
		}

		char *new_space = new char[strlen(rhs.m_brand) + 1] {};
		strcpy(new_space, rhs.m_brand);
		delete[] this->m_brand;
		this->m_brand = new_space;

		cout << "assignment operator function has finish." << endl;

		return *this;
	}

	void print()
	{
		cout << "m_brand :" << m_brand << endl;
		cout << "m_price :" << m_price << endl;
	}

	//destructor：析构函数
	~Computer()
	{
		if (m_brand != nullptr)
		{
			delete[] m_brand;
			m_brand = nullptr;
		}

		cout << "destructor function has finish." << endl;
	}
};

void test()
{
	Computer c1("小米", 1999);

	Computer c2 = c1;

	Computer c3("华为", 19999);

	c3 = c2;
}

int main_3(int argc,char * argv[])
{
	test();

	return 0;
}




