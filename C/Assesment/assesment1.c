#include<stdio.h>
#include<conio.h>
void food()
{
	int choice,price,quantity;
	char addanother,ans;
	float total,amount;
	
	do
	{
		
	printf("\n--------------------------Menu-------------------------------------\n");	
	printf("\n\n\t\t 1.Pizza      price=180rs/pcs");
	printf("\n\t\t 2.Burger       price=100rs/pcs");
	printf("\n\t\t 3.Dosa         price=120rs/pcs");
	printf("\n\t\t 4.Idli         price=50rs/pcs");
	
	printf("\n\n\t\t Please Enter your choice....... : ");
	scanf("%d",&choice);
	
	switch(choice)
    {
    	case 1:
    		printf("\n\t\tYou selected Pizza.");
    		price = 180;
    		break;
    	case 2:
		    printf("\n\t\tYou selected Burger.");	
		   	price = 100;
		    break;
 	    case 3:
		    printf("\n\t\tYou selected Dosa.");	
		   	price = 120;
		    break;   
		case 4:
		    printf("\n\t\tYou selected Idli.");	
		   	price = 50;
		    break;	 
		default:
			printf("\n\t\tInvalid input!!!");
			break;	
	} 
	
		printf("\n\t\tEnter the quantity :");
    	scanf("%d",&quantity);
    	
    	amount = quantity * price ;
    	printf("\t\tAmount : %.2f",amount);
    	
    	total = total + amount;
    	printf("\n\t\tTotal amount is = %.2f",total);
    	printf("\n\t\tDo you want place more order ? y&n : ");
    	scanf("%c",&ans);
    	addanother = getch();
	}
	while(addanother=='y'||addanother=='Y');
	{
		switch(ans)
		{
			case'y':
			case'Y':
			   food();
			   break;
			case'n':
			case'N':  	
			   printf("\n\nthank you_____visit again");
			   break;
		}
	}
}
void main()
{
	food();
}


