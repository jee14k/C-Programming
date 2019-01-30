#include<stdio.h>
#include<conio.h>
void selsort(int,int[]);
void accept(int,int[]);
main()
{
	char opt;
	int n,array[10];
	do
	{	
		system("cls");
		START: printf("--------------------------------");
		printf("\n        SELECTION SORT");
		printf("\n------------------------------");
		printf("\nEnter the number of elements: ");
		scanf("%d",&n);
		if(n>10||n<0)
		{
			printf("\nThe array can have only 10 elements\nEnter a positive integer less than 10\n");
			goto START;
		}
		else
		{
			accept(n,array);
			selsort(n,array);
		}
		printf("\n------------------------------");
		printf("\nDo you want to continue?(Y/N): ");
		scanf(" %c",&opt);
	}while(opt=='Y'||opt=='y');
	printf("\n END OF PROGRAM");
	getch();
	return 0;
}
void selsort(int num,int array[10])
{
	int i,j,min,pos;
	printf("\n------------------------------");
	printf("\nThe array is: ");
	printf("\n------------------------------\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	for(i=0;i<num;i++)
	{
		min=array[i];
		pos=i;
		for(j=i+1;j<num;j++)
		{
			if(min>array[j])
			{
				min=array[j];
				pos=j;
			}
		}
		array[pos]=array[i];
		array[i]=min;
	}
	printf("\n------------------------------");
	printf("\nThe sorted array is: ");
	printf("\n------------------------------\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
}
void accept(int abc,int arr[10])
{
	int i;
	printf("-----------------------------------");
	printf("\nEnter %d elements: \n",abc);
	for(i=0;i<abc;i++)
	{
		scanf("%d",&arr[i]);
	}
}
