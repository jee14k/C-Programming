#include<stdio.h>
#include<conio.h>
main()
{
	int i,num,count;
	char opt;
	do
	{
		system("cls");
		printf("Enter a number: ");
		scanf("\n %d",&num);
		count=0;
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n It is a prime number");
		}
		else
		{
			printf("\n It is not a prime number");
		}
		printf("\n Do you want to continue(Y/N): ");
		fflush(stdin);
		scanf("%c",&opt);
	}while(opt=='Y');
		getch();
		return 0;
}
