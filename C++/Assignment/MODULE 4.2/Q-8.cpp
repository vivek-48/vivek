#include<iostream>
using namespace std;
class maths
{
	public:
		
		void asmd(int a,int b)
		{
			cout<<"\n\n\t\t addition is :"<<(a+b);
		}
		void asmd(float c,int d)
		{
			cout<<"\n\n\t\t subtraction is :"<<(c-d);
		}
		void asmd(int e,float f)
		{
			cout<<"\n\n\t\t multiplication is :"<<(e*f);
		}
		void asmd(float g,float h)
		{
			cout<<"\n\n\t\t division is :"<<(float)(g/h);
		}
};

int main()
{
	int a;
	int b;
	float c;
	int d;
	int e;
	float f;
	float g;
	float h;
	
	cout<<"\n\n\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2 function overloading \xb2\xb2\xb2\xb2\xb2\xb2\xb2";
	
	cout<<"\n\n\t\t --------------- addition -------------------";
	
	cout<<"\n\n\t\t ENTER A :";
	cin>>a;
	cout<<"\n\n\t\t ENTER B :";
	cin>>b;
	maths obj;
	obj.asmd(a,b);
	
	cout<<"\n\n\t\t --------------- Substraction -------------------";
	
	cout<<"\n\n\t\t ENTER C :";
	cin>>c;
	cout<<"\n\n\t\t ENTER D :";
	cin>>d;
	obj.asmd(c,d);
	
	cout<<"\n\n\t\t --------------- Multiplication -------------------";
	
	cout<<"\n\n\t\t ENTER E :";
	cin>>e;
	cout<<"\n\n\t\t ENTER F :";
	cin>>f;
	obj.asmd(e,f);
	
	cout<<"\n\n\t\t --------------- Division -------------------";
	
	cout<<"\n\n\t\t ENTER G :";
	cin>>g;
	cout<<"\n\n\t\t ENTER H :";
	cin>>h;
	obj.asmd(g,h);
	return 0;
}