#include<stdio.h>
main()
{
	int num,fact,i;
	printf("To find the factorial of a number");
	printf("\n-------------------------------");
	printf("\n Enter a number: \n");
	scanf("\n %d",&num);
	fact=num;
		if(num==0)
	{
		printf("\n The factorial is: 1");
	}
	else
	{
	for(i=(num-1);i>0;i--)
	{
		fact=fact*i;
	}
	printf("\n The factorial is: %d",fact);
}
	getch();
	return 0;
}
