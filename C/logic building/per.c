#include<stdio.h>
     
     void main()
     {
     	float maths,bio,che,his,san;
     	float total;
     	
     	printf("marks of maths : ");
     	scanf("%f",&maths);
     	
     	printf("marks of bio : ");
     	scanf("%f",&bio);
     	
     	printf("marks of che : ");
     	scanf("%f",&che);
     	
     	printf("marks of his : ");
     	scanf("%f",&his);
     	
     	printf("marks of san : ");
     	scanf("%f",&san);
     	
     	total=(maths+bio+che+his+san)/500*100;
     	
     	printf("percenatge of your : %f",total);
     	
     	
	 }