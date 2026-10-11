#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::cout;
using std::endl;
using std::fstream;
using std::string;

using std::iostream;
using std::ostream;
using std::istream;



////定义一个point类
//class point
//{
//public:
//	point(int x, int y) :m_x(x), m_y(y)
//	{
//
//	}
//
//	int m_x;
//	int m_y;
//};

//输出运算符重载
//ostream &operator<<(ostream &os, const point &pt)
//{
//	cout << pt.m_x << " " << pt.m_y << endl;
//	return os;
//}

//void test1()
//{
//	point pt1(1, 1);
//	point pt2(2, 2);
//
//	cout << pt1 << endl;
//}

void read_stream()
{
	ifstream ifs("test.txt");			//把输入流对象ifs和文件进行绑定。

	if (!ifs)
	{
		cerr << "ifstream error";
		return;
	}

	//1：字符输出。
	char ch;
	while ((ch = ifs.get()) != EOF)
	{
		cout << ch;
	}
	cout << endl;
	//cout << "eof：" << ifs.eof() << endl;
	cout << "----------" << endl;

	//2：单词输出，默认以空格，换行为结尾。
	ifs.clear();			//文件读到最后的，ifs状态被改变。所以要清理。此时eof和fali都被置位了。
						//这里必须先ifs.coear()，因为此时ifs处于fail状态，使用ifs.seekg会失败。
	ifs.seekg(0);
	cout << ifs.tellg() << endl;
	string word;
	while (ifs >> word)		//ifs>>word，返回的是输入流对象ifs。
	{
		cout << word << endl;
	}
	cout << endl;
	ifs.clear();
	ifs.seekg(0);
	cout << ifs.tellg() << endl;
	cout << ifs.good() << endl;
	cout << "-------------" << endl;

	//3：按行输出。
	string line;
	//getline是string里面的一个非成员函数，用户获取一行数据。
	//getline函数返回流对象，ifs。
	while (getline(ifs, line))
	{
		cout << line << endl;
	}



	ifs.close();
}



//int main(int argc, char *argv[])
//{
//	//test1();
//
//	read_stream();
//
//
//	return 0;
//}
//







