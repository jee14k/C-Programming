#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int i,j,mat1[20][20],mat2[20][20],sum[20][20],diff[20][20],row,col;
	printf("To perform matrix addition and subtraction");
	printf("\n ------------------------------------------");	
	printf("\n Enter the number of rows: ");
	scanf("\n %d",&row);
	printf("\n ------------------------------------------");
	printf("\n Enter the number of columns: ");
	scanf("\n %d",&col);
	printf("\n ------------------------------------------");
	printf("\n Enter the 1st matrix: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n ------------------------------------------");
	printf("\n The 1st matrix is: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n Enter the 2nd matrix: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n ------------------------------------------");
	printf("\n The 2nd matrix is: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",mat2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("\n ------------------------------------------");
	printf("\n The sum is: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			diff[i][j]=mat1[i][j]-mat2[i][j];			
		}
	}
	printf("\n ------------------------------------------\n");
	printf("\n The difference is: \n");
	printf("\n ------------------------------------------\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d \t",diff[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
