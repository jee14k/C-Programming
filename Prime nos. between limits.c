#include<stdio.h>
#include<conio.h>
main()
{
	int prime,ll,ul,i,j,n,count;
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
		n=i;
		count=0;
		for(j=1;j<=n;j++)
		    if(n%j==0)
			{
				count++;
			}
	     if(count==2)
		{
			printf("\n %d",n);
		}
	}
	printf("\n ---------------------------------------------- \n");
	printf("\n End of programme");
	getch();
	return 0;
}
