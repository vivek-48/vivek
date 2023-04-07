#include<stdio.h>


void main()
{
	int Myage;
	int myfatherage;
	
	printf("type Myage is : ",Myage);
	scanf("%d",&Myage);
	printf("type myfatherage is : ",myfatherage);
	scanf("%d",&myfatherage);
	
	if(Myage<=myfatherage)
	{
		printf("My father is old  ");
	}
	else
	{
		printf("my father is not old");
	}
}