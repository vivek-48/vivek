#include<iostream>
using namespace std;



template <typename T>
T add(T a,T b)
{
	return a+b;
}

int main()
{
	cout<<"\nAdd using integer TYPE : "<<add<int>(10,20);
	cout<<"\nAdd using float TYPE : "<<add<float>(10.15,20.56);
	cout<<"\nAdd using Concatenate : "<<add<string>("Tops","tech");
	
	
	return 0;
	
}