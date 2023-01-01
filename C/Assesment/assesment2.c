#include<stdio.h>

void main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int i,j;
	printf("\n---------------------------------Matrix 1---------------------------------------\n\n");
 
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         {
         	printf("Enter Elements : ");
         	scanf("%d",&matrix1[i][j]);
		 }
	}
	
	
	printf("\n\n");
	
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
}





	printf("\n---------------------------------Matrix 2---------------------------------------\n\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
         {
         	printf("Enter Elements : ");
         	scanf("%d",&matrix2[i][j]);
		 }
	}
	
	
	
		printf("\n\n");
		
	for(i=0;i<2;i++)
   	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
 	}

	

		printf("\n---------------------------------Result : Multiplication Matrix---------------------------------------\n\n");


     	printf("\n\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",(matrix1[i][j]*matrix2[i][j]));
		}
		printf("\n");
	}
	
}