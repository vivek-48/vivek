#include<stdio.h>

void main()
{
	int a,b,choice;
	
	printf("\nenter a:");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("\na=%d,b=%d",a,b);
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2menu\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n press 1:addition");
	printf("\n press 2:multiplication");
	printf("\n press 3:substraction");
	printf("\n press 4:division");
    printf("\n\nenter your choice?",choice);
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\naddition:%d",(a+b));
	}
	
	else if(choice==2)
	{
		printf("\nmultiplication:%d",(a*b));
	}
	
	if(choice==3)
	{
		printf("\nsubstraction:%d",(a-b));
	}
	
	if(choice==4)
	{
		printf("\ndivision:%.2f",((float)a/b));
	}
	
	else
	{
		printf("\ninvalid statment");
	}
	
	
	
}