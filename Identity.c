#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int row,col,i,j,flag=0,mat[20][20];
	char ch;
	do
	{
		printf("To check whether it is an identity matrix");
		printf("\n Enter the order of rows: ");
		scanf("%d",&row);
	printf("\n Enter the order of columns: ");
	scanf("%d",&col);
	if(row==col)
	{
		printf("\n It is a square matrix");
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
			// to check whether identity or not
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(i==j&&mat[i][j]!=1)
				{
					flag=1;
					break;
				}
				else if(i!=j&&mat[i][j]!=0)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		{			
			printf("\n It is an identity matrix");
		}
		else 
		{
			printf("\n It is not an identity matrix");
		}
	}
	else
	{
		printf("\n It is not a square matrix \n Please enter equal number of rows and columns");
	}
	printf("\n Do you want to continue(Y/N)\n: ");
	scanf(" %c",&ch);
}while(ch=='Y');
	getch();
	return 0;
}
