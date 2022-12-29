#include<iostream>
using namespace std;

int main()
{
	int a,b,choice;
	cout<<"\nenter A: ";
	cin>>a;
	cout<<"\nenter B: ";
	cin>>b;
   
    cout<<"A= "<<a<<"\nB= "<<b;
    
//    cout<<"\naddition : "<<(a+b);
//    cout<<"\nsubstraction : "<<(a-b);
//    cout<<"\nmultiplication : "<<(a*b);
//    cout<<"\ndivision : "<<((float)a/b);
//	      

     cout<<"\npress 1 for addition";
     cout<<"\npress 2 for substraction";
     cout<<"\npress 3 for multiplication";
     cout<<"\npress 4 for division";

     cout<<"\nenter your choice :";
     cin>>choice;
     
     switch(choice)
     {
     	case 1:
     		cout<<"\naddition : "<<(a+b);
     		break;
     	case 2:
		    cout<<"\nsubstraction : "<<(a-b);
		    break;
		case 3:
		  	cout<<"\nmultiplication : "<<(a*b);
		    break;
		case 4:
		    cout<<"\ndivision : "<<((float)a/b);	
		    break;		    
		    
	 }

	      return 0;
}