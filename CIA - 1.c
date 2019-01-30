#include<stdio.h>  																		/* header files */
#include<conio.h>	
main()              																	 					
{																						/* beginning of main */
	int i,row,j,col,arr[20][20],rowch,colch;											/* variables declared */
	char opt,ch;
	printf("Program to extract an element from a matrix \n");			
	printf("===============================================\n");
	do
	{
		BEG:
		printf("\n Enter the order of rows: ");
		scanf("%d",&row);
		if(row<=0 || row>20)
		{
			printf("\n The matrix can have only 20 rows and cannot be negative");
			goto BEG;
		}
		HI: 
		printf("\n Enter the order of columns: ");
		scanf("%d",&col);
		if(col<=0 || col>20)
		{
			printf("\n The matrix can have only 20 columns and cannot be negative");
			goto HI;
		}
		printf("\n ----------------------------------------------");
		printf("\n Enter the matrix: ");
		printf("\n ---------------------------------------------- \n");					/* User Entering the matrix */
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		printf("\n ----------------------------------------------");					/* printing the matrix */
		START:
		printf("\n The matrix is: \n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d \t",arr[i][j]);
			}
			printf("\n");
		}
		printf("\n ----------------------------------------------");
		ABC: 
		printf("\n Enter the row number of the element you want to extract: ");
		scanf("\n %d",&rowch);
		if(rowch==0 || rowch<0)
		{
			printf("\n The number of rows start from 1 and can only be positive");
			goto ABC;
		}
		if(rowch<=row)
		{
			DEF:
			printf("\n Enter the column number of the element you want to extract: ");
			scanf("\n %d",&colch);
			if(colch==0 || colch<0)
			{
				printf("\n The number of columns start from 1 and can only be ");
				goto DEF;
			}
			if(colch<=col)
			{
				printf("\n ----------------------------------------------");
				printf("\n The element in the %d row and the %d column is",rowch,colch);			/* asking which element user wants */
				printf("\n %d",arr[rowch-1][colch-1]);												/* -1 as index starts from 0 */
				printf("\n Do you want to continue?(Y/N): ");
				scanf(" %c",&opt);
				if(opt=='N'||opt=='n')
				{
					goto END;
				}
				printf("\n Do you want to work on the same matrix?(Y/N): ");
				scanf(" %c",&ch);
				if(ch=='Y'||ch=='y')
				{
					goto START;
				}
				else
				{
					system("cls");
					goto BEG;
				}
			}
			else
			{
				printf("\n Please enter a valid column number!");
				goto DEF;
			}
		}
		else
		{
			printf("\n Please enter a valid row number!");
			goto ABC;
		}
	}while(opt=='Y'||opt=='y');
	END: 
	printf("===============================================\n");
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
