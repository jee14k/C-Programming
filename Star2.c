#include<stdio.h>
main()
{
	char ch = '*';
	int i,j;
	for(i=0;i<=5;i++)
	{
		for(j=5;j>i;j--)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	getch();
	return 0;
}
