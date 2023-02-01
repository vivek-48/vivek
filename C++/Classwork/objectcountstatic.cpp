#include<iostream>
using namespace std;

class sample{
	public:
		static int objcount;
		
		sample()
		{
			cout<<"\ndefault constrauctor called";
			objcount++;
		}
};

int sample :: objcount=0;

int main()
{
	sample s1,s2,s3,obj,obj1,k,l;
	cout<<"\nobject count : "<<s1.objcount;
	return 0;
}