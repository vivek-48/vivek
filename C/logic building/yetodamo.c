#include<stdio.h>
void main()
{
	int y,d,m;
	
	printf(" enter year : ");
	scanf("%d",&y);
	
	m=y*12;
	d=y*360;
	
	printf("\n  month : %d",m);
		printf("\n  days : %d",d);
}