#include<stdio.h>

void main()

{
	int age;
	char name[25];
	float salary;
	
	printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2 personal details\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\nenter your name :");
	//scanf("%s",&name);
	gets(name);
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your salary:");
	scanf("%f",&salary);
	

	printf("\nname is : %s",name);
	printf("\nage is:%d",age);
	printf("\nslary is : %.2f",salary);
	
	
	
	}