#include<stdio.h>
#include<conio.h>
void inssort(int,int[]);
void binary(int,int,int[]);
void accept(int,int[]);
main()
{
	int ele,n,array[10],i;
	char ch;
	do
	{
		system("cls");
		START: printf("-----------------------------------\n");
		printf("	BINARY SEARCH \n");
		printf("-----------------------------------\n");
		printf("Enter the number of elements: \n");
		scanf("%d",&n);
		if(n>10||n<0)
		{
			printf("\nThe array can have only 10 elements\nEnter a positive integer less than 10\n");
			goto START;
		}
		accept(n,array);
		inssort(n,array);
		printf("\nEnter the element you want to search for: ");
		scanf("%d",&ele);
		binary(ele,n,array);
		printf("\n------------------------------");
		printf("\nDo you want to continue?(Y/N): ");
		scanf("\n %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
void inssort(int abc,int arr[10])
{
	int temp,i,j;
	for(i=1;i<abc;i++)
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
	printf("-----------------------------------\n");
	printf("The sorted array is: ");
	for(i=0;i<abc;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n-----------------------------------");
}
void binary(int value,int num,int array[10])
{
	int low,high,mid;
	low=0;
	high=num-1;
	while(low<=high)
	{
		mid = (low+high)/2;
		if(array[mid]<value)
		{
			low=mid+1;
		}
		else if(array[mid]==value)
		{
			printf("-----------------------------------");
			printf("\nElement found in position %d",mid+1);
			printf("\n-----------------------------------");
			break;
		}
		else 
		{
			high=mid-1;
		}
	}
	mid=(low+high)/2;
	if(low>high)
	{
		printf("Element not found in array");	
	}
}
void accept(int bad,int arr[10])
{
	int i;
	printf("-----------------------------------");
	printf("\nEnter %d elements: \n",bad);
	for(i=0;i<bad;i++)
	{
		scanf("%d",&arr[i]);
	}
}
