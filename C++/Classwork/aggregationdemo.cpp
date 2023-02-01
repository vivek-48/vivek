#include<iostream>
using namespace std;

class Address{
	public:
		string street,city,state;
		
		Address(string street,string city,string state)
		{
			this->street=street;
			this->city=city;
			this->state=state;
		}
};


class Employee{
	private:
		Address *address;
	public:
		int id;
		string name;
		
		Employee(int id,string name,Address *address)
		{
			this->address=address;
			this->id=id;
			this->name=name;
		}
		
		void display()
		{
			cout<<"\nId  :"<<id;
			cout<<"\nName  :"<<name;
			cout<<"\n Address Line :"<<address->street;
			cout<<"\nCity  :"<<address->city;
			cout<<"\n State  :"<<address->state;
			
		}
};

int main()
{
	Address a1("190 cg road","ahmedabad","gujarat");
	Employee e1(101,"vivek",&a1);
	e1.display();
	
	return 0;
}