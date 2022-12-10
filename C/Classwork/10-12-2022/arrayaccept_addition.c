#include<stdio.h>

void main()
{
	int arr1[5],arr2[5];
	int i;
	printf("\nenter array 1 elements: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
		printf("\nenter array 2 elements: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\n\naddition of 1 elements are:\n\n");
		for(i=0;i<5;i++)
   	{
		printf("%d\n",arr1[i]);
	}

   printf("\n\naddition of 2 elements are:\n\n");
		for(i=0;i<5;i++)
   	{
		printf("%d\n",(arr1[i]+arr2[i]));
	}




}