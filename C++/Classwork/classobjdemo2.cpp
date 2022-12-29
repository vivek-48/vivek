#include<iostream>
using namespace std;

class employee{
	
	public:
		int eid;
		string name;
		float salary;
		
	
		void showdetails(int eid,string name,float salary)
		{
				cout<<"\n id : "<<eid;
				cout<<"\n name : "<<name;
				cout<<"\n salary : "<<salary;
		}
	
	
};

   int main()
   {
   	    employee mann;
   	    int eid;
   	    double salary;
   	    string name;
   	    
   	    	cout<<"\nenter id : ";
			cin>>eid;
			fflush(stdin);
			cout<<"\nenter name : ";
		//	cin>>name;
		    getline(cin,name);
			cout<<"\nenter salary : ";
			cin>>salary;
   	    mann.showdetails(eid,name,salary);
   	    return 0;
   }