#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int row,col,i,j,mat[20][20],trans[20][20];
	printf("\n Enter the order of rows: ");
	scanf("%d",&row);
	printf("Enter the order of columns: ");
	scanf("%d",&col);
	printf("\n Enter the matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n The matrix is: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d  \t",mat[i][j]);
	    }
	    printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			trans[j][i]=mat[i][j];
		}
	}
	printf("\n The transpose is :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",trans[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
