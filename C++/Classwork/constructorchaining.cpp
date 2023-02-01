#include<iostream>
using namespace std;

class A{
	public:
		A()
		{
			cout<<"A's constructor called'";
		}
};
class B:public A{
	public:
		B()
		{
			cout<<"B's constructor called'";
		}
};
class C:public B{
	public:
		C()
		{
			cout<<"C's constructor called'";
		}
};

int main()
{
	C obj;
	return 0;
}