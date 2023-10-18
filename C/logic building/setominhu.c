#include<stdio.h>
void main()
{
	float m,s,h;
	
	printf(" enter minute : ");
	scanf("%f",&m);
	
	s=m*60;
	h=m/60;
	
	printf("\n second is : %f",s);
	printf("\n hour is : %f",h);
	
}