#include<stdio.h>
main()
{
	int num,lim,count=0,res;
	printf("Multiplication table of a number");
	printf("\n----------------------------------");
	printf("\n Please enter a number: ");
	scanf("\n %d",&num);
	printf("\n Enter the limit: ");
	scanf("\n %d",&lim);
	printf("\n----------------------------------");
	while(count<=lim)
	{
		res=num*count;
		printf("\n %d * %d = %d",num,count,res);
		count++;
	}
	getch();
	return 0;
}
