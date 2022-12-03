#include<stdio.h>

void main()
{
	int a,b,c;
	printf("/nenter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("\na=%d,b=%d,c=%d",a,b,c);
	
	if(a>b)
	{
		if(a>c)
	{
		
		printf("/n%d is greater",a);
		}
		else
		{
				printf("/n%d is greater",c);
		}
		
	}
	else
	{
		if(b>c)
		{
				printf("\n%d is greater",b);
		}
		else
		{
				printf("\n%d is greater",c);
		}
		
	}
	
	

}