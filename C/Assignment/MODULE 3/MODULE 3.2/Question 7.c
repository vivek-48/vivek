#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter number for print table : ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d = %d\n",(n),(i),(n*i));
	}
}