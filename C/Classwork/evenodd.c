#include<stdio.h>

void main()
{
	int a;
	printf("\nenter a:");
	scanf("%d,&a");
	
	if(a%2==0)
	{
		printf("\n%d is even.",a);
	}
	else
	{
		
		printf("\n%d is odd.",a);
	}
}