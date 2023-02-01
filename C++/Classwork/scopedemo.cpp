#include<iostream>
using namespace std;

class scopedemo{
	public:
		string name,address="vaghgadh";
		int age=21;
		
		void getname();
		void details();
};

void scopedemo ::getname()
{
	cout<<"\n enter name : ";
	getline(cin,name);
}

void scopedemo ::details()
{
	cout<<"\n name : "<<name;
	cout<<"\n Age : "<<age;
	cout<<"\n Address : "<<address;
}

int main()
{
	scopedemo s1;
	s1.getname();
	s1.details();
	return 0;
}
