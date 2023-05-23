#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
//	float num;
//	float result;
//	
//	printf("Enter The Temperature : ",num);
//	scanf("%f",&num);
//	
//	printf("convert to the Fahrenheit : ");
//	result=(num-32)*5/9;
//	
//	printf("result :%.2f",result);
//	



//   int a=34;
//   
//   char t=a;
//   
//   printf("%c",t);


    char name[10]="vivekras";
    char subname[10]="Rasadiya";	
    char address[10];
    char salary[10]="10000";
    char fname[10]="Dhirajbhai";
    
    printf("%s",name);
     printf("%s",subname);
     
    printf("string length : %d\n",strlen(name));
    printf("string Reverse : %s\n",strrev(subname));
	printf("string Reverse2 : %s\n",strrev(subname));
	printf("string Copy : %s\n",strcpy(address,subname));
	
	printf("string Concentation : %s\n",strcat(subname,name));
   	printf("\nString Compare : %d",strcmp(subname,name));
	printf("\nString Uppercase : %s",strupr(fname));
	printf("\nString Lowercase : %s",strlwr(subname));
    
   
}