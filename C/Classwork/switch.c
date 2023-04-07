#include<stdio.h>


int calci()
{
	int choice;
	int x,y;

printf("enter x :",x);
scanf("%d",&x);
printf("enter y :",y);
scanf("%d",&y);
printf("Enter your Choice \n",choice);
printf("press 1 : Addition\n ");
printf("press 2 : multiplication\n ");
printf("press 3 : substraction \n");
printf("press 4 : division\n ");

scanf("\n%d",&choice);
switch (choice)
     {
	case 1:
		printf("Addition is :%d ",(x+y));
		break;
	case 2:
		printf("Multiplication is :%d ",(x-y));
		break;
	case 3:
		printf("Substraction is :%d ",(x*y));
		break;
	case 4:
     	printf("division is :%d ",(x/y));
		break;
	default:
		printf("please enter valid choice...!");
		break;
	
     }


}

void main()
{
	calci();
	return 0;
	
}