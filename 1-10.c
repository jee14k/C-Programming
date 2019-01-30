#include<stdio.h>
main()
{
	int i,j;
	int num = 1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
		}
		printf("\n");
		num++;
	}
	getch();
	return 0;
}
