#include<stdio.h>
main()
{
	int a,b,c,lar,seclar;
	char opt;
	printf("Program to find the largest & second largest of 3 numbers");
	printf("\n---------------------------------------------------------\n");
	do
	{
	printf("\n Enter 3 numbers :");
	printf("\n---------------------------------------------------------\n");
	scanf("\n %d%d%d",&a,&b,&c);
	if(a>c)
	{
		if(a>b)
		{
			lar=a;
		}
		else
		{
			seclar=a;
		}
   }
   if(b>c)
	{
		if(b>a)
		{
			lar=b;		
		}
		else
		{
			seclar=b;
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			lar=c;
		}
		else
		{
			seclar=c;
		}
	}
	printf("\n ---------------------------------------\n");
	printf("\n The largest number is %d",lar);
	printf("\n---------------------------------------------------------\n");
	printf("\n The second largest number is %d",seclar);
	printf("\n Do you want to continue(Y/N): ");
    scanf("%c",&opt);
	}
	while(opt=='Y');
	printf("\n---------------------------------------------------------\n");
	getch();
	return 0;
}

