#include <iostream>

using namespace std;

class A
{
public:
	double a1;
	double a2;

	virtual void AAA()
	{

	}
};

class B
{
public:
	int B1;
	double B2;
};

class C :public A, public B
{
public:
	double c1;
	double c2;

};

int main(int argc, char *argv[])
{






	return 0;
}
