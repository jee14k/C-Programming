#include<stdio.h>
#include<conio.h>
main()
{
	int prime,ll,ul,i,j;
	printf("Programme to find the prime numbers between limits");
	printf("\n ---------------------------------------------- \n");
	printf("\n Enter the lower limit: \n");
	scanf("\n %d",&ll);
	printf("Enter the upper limit: \n");
	scanf("\n %d",&ul);
	printf("\n ---------------------------------------------- \n");
	printf("The prime numbers are: \n");
	printf("\n ---------------------------------------------");
	for(i=ll;i<=ul;i++)
	{
		prime=1;
		for(j=2;j<i/2;j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1)
		{
			printf("\n %d",i);
		}
	}
	printf("\n ---------------------------------------------- \n");
	printf("\n End of programme");
	getch();
	return 0;
}
