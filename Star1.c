#include<stdio.h>
main()
{
	char ch = '*';
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	getch();
	return 0;
}
