#include<iostream>
using namespace std;

class A
{
	public:
		int a;
		
		void getA()
		{
			cout<<"\nEnter A : ";
			cin>>a;
		}
		
		void putA()
		{
			cout<<"A = "<<a;
		}
};

class B : public A
{
	public:
		int b;
		
		void getB()
		{
			cout<<"\nEnter B : ";
			cin>>b;
		}
		
		void putB()
		{
			cout<<"B = "<<b;
		}
};


int main()
{
	B obj1;
	obj1.getA();
	obj1.getB();
	obj1.putA();
	obj1.putB();
	return 0;
}