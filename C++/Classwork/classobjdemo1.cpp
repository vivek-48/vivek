#include<iostream>
using namespace std;

class employee{
	
	public:
		int eid;
		string name;
		float salary;
		
		void getdetails()
		{
			cout<<"\nenter id : ";
			cin>>eid;
			fflush(stdin);
			cout<<"\nenter name : ";
		//	cin>>name;
		    getline(cin,name);
			cout<<"\nenter salary : ";
			cin>>salary;
		}
		void showdetails()
		{
				cout<<"\n id : "<<eid;
				cout<<"\n name : "<<name;
				cout<<"\n salary : "<<salary;
		}
	
	
};

   int main()
   {
   	    employee mann;
   	    mann.getdetails();
   	    mann.showdetails();
   	    
   	    return 0;
   }