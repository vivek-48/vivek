#include<iostream>
using namespace std;

class sample
{
	public:
	string fname,lname;
	int age;
	
	sample()
	{
		cout<<"\nDefault constructor called.";
	}
	
	sample(string f,string l,int a)
	{
		cout<<"\nparameterised constructor called.";
		fname=f;
		lname=l;
		age=a;
	}
	
	sample(const sample &obj)
	{
		cout<<"\n\ncopy constructor called";
		fname=obj.fname;
		lname=obj.lname;
		age=obj.age;
	}
	
	void display()
	{
		cout<<"\nfirst name : "<<fname<<"\nlast name : "<<lname<<"\nage : "<<age;
	}
};


int main()
{
	sample vivek,obj1("nick","rasadiya",21);
	sample obj2("dhruv","patel",21);
	obj1.display();
	obj2.display();
	sample obj(obj2);
	obj.display();
	
	
	
	return 0;
}