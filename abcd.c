#include<stdio.h>
main()
{
	int fact(int);
	int a;
	fact(a);
	printf("\n End");
	return 0;
}
int fact(int a)
{
	int f1=1,i;
	printf("\n Enter the number: ");
	scanf("\n %d",&a);
	if(a==0)
		printf("\n Factorial is 0");
	else
	{
			
	for(i=1;i<=a;i++)
	{
		f1=f1*i;
	}
	printf("\n Factorial of a given number is: %d",f1);
	}
}
