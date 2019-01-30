#include<stdio.h>
main()
{
	int a,b,c,sum,avg;
	printf("To find the sum and average of 3 numbers");
	printf("\n ---------------------------------------\n");
	printf("\n Enter 3 numbers: \n");
	scanf("\n %d%d%d",&a,&b,&c);
	printf("\n ---------------------------------------\n");
	sum=a+b+c;
	avg=sum/3;
	printf("\n The sum is: %d",sum);
	printf("\n ---------------------------------------\n");
	printf("\n The average is: %d",avg);
	printf("\n ---------------------------------------\n");
	getch();
	return 0;
}
