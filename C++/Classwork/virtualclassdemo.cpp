#include<iostream>
using namespace std;

class A{
	public:
		void msg()
		{
			cout<<"\nhello class from A.";
		}
};

class B:virtual public A{
	
};

class C:virtual public A{
	
};

class D:public B,public C{
	
};

int main()
{
	D obj;
	obj.msg();
	return 0;
}