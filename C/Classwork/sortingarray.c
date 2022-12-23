#include<stdio.h>

void main()
{
	int arr1[5];
	int i,j,temp;
	
	printf("\nenter array elements :\n\n");
	for(i=0;i<5;i++)
	{
		printf("enter element[%d]:",i+1);
		scanf("%d",&arr1[i]);
		
	}
		
	printf("\nenter array elements :\n\n");
	for(i=0;i<5;i++)
	{
		printf("%d",arra1[i]);
	
		
	}
	
	printf("\n element in ascending order:\n\n");
		for(j=i+1;j<5;j++)
		{
			if(arr1[i]>arr1[j])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		}
	
	for(i=0,i<5,i++)
	{
		printf("\n%d\t",arr1[i]);
		
	}
	
	printf("\n element in ascending order:\n\n");
	for(j=i+1;j<5;j++)
	{
		if(arr1[i]<arr1[j])
		{
			temp=arr1[i];
			arr1[i]=arr1[j];
			arr1[j]=temp;
		}
	}
		for(i=0,i<5,i++)
	{
		printf("\n%d\t",arr1[i]);
		
	}
}