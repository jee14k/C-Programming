#include<stdio.h>
main()
{
	char ch = 'A';
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
	getch();
	return 0;
}
