#include<stdio.h>
main()
{
	int num;
	printf("To check whether a number is odd or even");
	printf("\n--------------------------------------\n");	
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n--------------------------------\n");
		printf("\n The number is even");
	}
	else
	{
		printf("\n---------------------------------\n");
		printf("\n The number is odd");
	}
	getch();
	return 0;	
}
