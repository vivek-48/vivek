#include<stdio.h>
void main()
{
	char n[10],n1[10],n2[10],n3[10],n4[10];
	int a,a1,a2,a3,a4;
     	int total;
     	
     	printf("please enter your name : ");
     	scanf("%s",&n);
     	printf("\n please enter your salary : ");
     	scanf("%d",&a);
     	
     	printf("\n please enter your name : ");
     	scanf("%s",&n1);
     	printf("\n please enter your salary : ");
     	scanf("%d",&a1);
		 
		 printf("\n please enter your name : ");
		 scanf("%s",&n2);
     	printf("\n please enter your salary : ");
     	scanf("%d",&a2);
     	
     	printf("\n please enter your name : ");
     	scanf("%s",&n3);
     	printf("\n please enter your salary : ");
     	scanf("%d",&a3);
     	
     	printf("\n please enter your name : ");
     	scanf("%s",&n4);
     	printf("\n please enter your salary : ");
     	scanf("%d",&a4);
     	
     	total=(a+a1+a2+a3+a4)/5;
     	
     	printf("\n percenatge of your : %d",total);
}