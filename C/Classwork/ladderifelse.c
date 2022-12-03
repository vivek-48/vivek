#include<stdio.h>

void main()
{
	int rollno,s1,s2,s3,tot;
	char name[20];
	float per;
	printf("\n enter name:");
	//gets(name);
	scanf("%s",&name);
		printf(" enter roll no.");
		scanf("%d",&rollno);
		printf(" enter physics marks");
		scanf("%d",&s1);
			printf(" enter chemistry marks");
		scanf("%d",&s2);
			printf("enter maths marks");
		scanf("%d",&s3);     		
		tot=s1+s2+s3;
		per=(float)tot/3;
		
		printf("\nroll no:%d",rollno);
		printf("\nname:%s",name);
		printf("\ntotal:%d",tot);
		printf("\npercentage:%.2f",per);
			
		if(per>=75)	
      {
      	printf("\ndistinction");
	}
	else if(per>=60)
	{
			printf("\nfirst class");
				}			
		
			else if(per>=50)
	{
			printf("\nsecond class");
	}	
				
	else if(per>=40)
	{
			printf("\npass class");
	}	

     else
     {
     	printf("\nfail");
	 }
    



}