#include<iostream>
using namespace std;


class Harshit{
	private:
		int money;
		friend int Vansh(Harshit);
		
	public:
	    Harshit()
		{
			money=0;
		}
			
};


int Vansh(Harshit h)
{
	h.money = 5000;
	return h.money;
}

int main()
{
	Harshit h;
	cout<<"\nVansh has given Rs."<<Vansh(h)<<" to harshit.";
	return 0;
}