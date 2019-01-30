#include<stdio.h>
#include<conio.h>
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
	printf("\n Enter value of a: \n");+
	scanf("%d",&a);
	if(a==0)
	{
		printf("\n The factorial is: 1");
	}
	else
	{
		for(i=1;i<=a;i++)
		{
			f1=f1*i;
		}
		printf("\n The factorial is: %d",f1);
	}	
}	
