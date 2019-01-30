#include<stdio.h>
#include<math.h>
main()
{
	float fahr;
	float cel;
	char ch; char opt;
	printf("To convert from Celcius to Fahrenheit");
	printf("\n -------------------------------------");
	do
	{
	printf("\n Fahrenheit - f");
	printf("\n -------------------------------------");
	printf("\n Celcius - c");
	printf("\n -------------------------------------");
	printf("\n Enter your choice :"); 
	printf("\n--------------------------------------\n");
	scanf("\n %c",&ch);
	switch(ch)
	{
		case 'f':printf("\n----------------------------------");
				 printf("\n Enter a value: ");
		         printf("\n----------------------------------\n");
		         scanf("%f",&fahr);
				 cel=5*(fahr-32)/9;
				 printf("\n Value in celcius is: %.2f",cel);
				 printf("\n----------------------------------");
				 break;	
		case 'c':printf("\n----------------------------------");
				 printf("\n Enter a value: ");
				 printf("\n----------------------------------\n");
		         scanf("%f",&cel);
				 fahr=(9*cel/5)+32;
				 printf("\n Value in fahrenheit is: %.2f",fahr);
				 printf("\n----------------------------------");
				 break;
		default: printf("\n Please enter the value in decimal");
				 break;	
	}
	printf("\n Thank you for your time");
	printf("\n -----------------------------------------------");
	printf("\n End of program");
	printf("\n------------------------------------------------");
	printf("\n Do you want to continue(Y/N): ");
	scanf("\n %c",&opt);
	}   
	while(opt=='Y'); 
	getch();
	return 0;
}
