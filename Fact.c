#include<stdio.h>
main()
{
	int i,num,fact=1;
	printf("Factorial of number");
	printf("\n Enter the number: ");
	scanf("%d",&num);
	if(num==0)
		printf("\n The factorial is 1");
	for(i=0;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\n The factorial is %d",fact);
	getch();
	return 0;
}
