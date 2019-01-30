#include<stdio.h>
#include<conio.h>
void inssort(int,int[]);
void accept(int,int[]);
main()
{
	char opt;
	int n,arr[10];
	do
	{	
		system("cls");
		START: printf("--------------------------------");
		printf("\n        INSERTION SORT");
		printf("\n------------------------------");
		printf("\nEnter the number of elements: ");
		scanf("%d",&n);
		if(n>10)
		{
			printf("\n!!! ARRAY CAN HAVE ONLY 10 ELEMENTS !!!");
			goto START;
		}
		else
		{
			accept(n,arr);
			inssort(n,arr);
		}
		printf("\n------------------------------");
		printf("\nDo you want to continue?(Y/N): ");
		scanf(" %c",&opt);
	}while(opt=='Y'||opt=='y');
	printf("\n END OF PROGRAM");
	getch();
	return 0;
}
void inssort(int num,int arr[10])
{
	int i,j,temp;
	printf("\n------------------------------");
	printf("\nThe array is: ");
	printf("\n------------------------------\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=1;i<num;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<arr[j])
			{
				arr[j+1]=arr[j];
			}
			else
				break; 
		}
		arr[j+1]=temp;
	}
	printf("\n------------------------------");
	printf("\nThe sorted array is: ");
	printf("\n------------------------------\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
}
void accept(int boy,int array[10])
{
	int i;
	printf("-----------------------------------");
	printf("\nEnter %d elements: \n",boy);
	for(i=0;i<boy;i++)
	{
		scanf("%d",&array[i]);
	}
}
