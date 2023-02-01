#include<iostream>
using namespace std;

class side
{
   protected:
        int l;
	public:
	   void setval(int x)
	   {
	   	l=x;
	   }	
};

class square : public side
{
     public:
	    int sqr()
		{
			return l*l;
		}	
};

class cube : public side
{
     public:
	   int cub()
	   {
	   	return l*l*l;
	   }	
};


int main()
{
	square sq;
	int val;
	cout<<"\nenter value of square : ";
	cin>>val;
	sq.setval(val);
	int s=sq.sqr();
	cout<<"\nsquare is : "<<s;
	if(s%2==0)
	{
		cout<<"\nsquare is even ";
	}
	else
	{
		cout<<"\nsquare is odd ";
	}
	cube cu;
	int pas;
	cout<<"\nenter value of cube : ";
	cin>>pas;
	cu.setval(pas);
	int v=cu.cub();
	cout<<"\ncube is : "<<v;
    if(v%2==0)
	{
		cout<<"\ncube is even ";
	}
	else
	{
		cout<<"\ncube is odd ";
	}
	
	(s>v)?cout<<"\nsqaure is greater":cout<<"\ncube is greater";
	
	
	return 0;
}