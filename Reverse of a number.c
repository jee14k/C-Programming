#include<stdio.h>
main()
{
	int num,pal=0,store,b;
	char opt;
	printf("To find the reverse of a number and check if it is a palindrome");
	printf("\n---------------------------------------------------------\n");
	do
	{
	printf("\n Enter the number: ");
	printf("\n---------------------------------------------------------\n");
	scanf("\n %d",&num);
	b=num;
	while(num>0)
	{
		store=num%10;
		pal=(pal*10)+store;
		num=num/10;
	}
	if(pal==b)
	{
		printf("\n---------------------------------------------------------\n");
		printf("\n It is a palindrome");
	}
	else
	{
		printf("\n---------------------------------------------------------\n");
		printf("\n It is not a palindrome");
	}
	printf("\n---------------------------------------------------------\n");
	printf("\n The reverse is %d",pal);
	printf("\n---------------------------------------------------------\n");
    printf("\n Do you want to continue(Y/N): ");
    scanf("%c",&opt);
	}
    while(opt=='Y');
	getch();
	return 0;
}
