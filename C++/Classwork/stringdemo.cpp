#include<iostream>
using namespace std;


int main()
{
	string name1="Mann";
	string name2;
	cout<<"Name : "<<name1;
	name2=name1;
	cout<<"Name : "<<name2;
	cout<<"\nString Concenetrate : "<<name1+name2;
	int len = name2.size();
	cout<<"\nString length : "<<len;
	
	
}