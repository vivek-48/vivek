#include<stdio.h>


int add(int a,int b)
{
	printf("\nin function A=%d,B=%d",a,b);
	return a+b;
}

void main()
{
	int res,a,b;
	
	printf("\nenter A...");
	scanf("%d",&a);
	printf("\nenter B...");
	scanf("%d",&b);
		res=add(a,b);
	
	//printf("%d",add(47,87));
	printf("\n%d+%d=%d",a,b,res);
	if(res%2==0)
	{
		printf("\n\n%d is even",res);
		
	}
	else
	{
		printf("\n\n%d is odd",res);
	}

}