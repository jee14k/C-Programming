#include<stdio.h>
main()
{
	int arr[10],pos,n,i,sc,ele;
	char ch;
	printf("Program to delete an element from the array \n");
	do
	{
		printf("\n Enter the number of elements: ");
		scanf("%d",&n);
		printf("\n Enter %d elements: \n",n);
		for(i=0;i<n;i++)
		{
			scanf(" %d",&arr[i]);
		}
		printf("\n The array is: ");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr[i]);
		}
		printf("\n 1. Delete by position \n 2. Delete by element \n");
		printf("\n Enter your choice: \n");
		scanf("\n %d",&sc);
		switch(sc)
		{
			case 1: printf("\n 1. Deleting by position");
					printf("\n Enter the position you want to delete: ");
					scanf(" %d",&pos);
					for(i=pos-1;i<n;i++)
					{
						arr[i]=arr[i+1];
					}
					n--;
					printf("\n The new array is: ");
					for(i=0;i<n;i++)
					{
						printf(" %d",arr[i]);
					}
					break;
			case 2: printf("\n 2. Deleting by element");
					printf("\n Enter the element you want to delete: ");
					scanf(" %d",&ele);
					for(i=0;i<n;i++)
					{
						if(arr[i]==ele)
							pos=i;
					}
					for(i=pos;i<n;i++)
					{
						arr[i]=arr[i+1];
					}
					n--;
					printf("\n The new array is: ");
					for(i=0;i<n;i++)
					{
						printf(" %d",arr[i]);
					}
					break;
		}
		printf("\n Do you want to continue?(Y/N): ");
		scanf(" %c",&ch);
		}while(ch=='Y'||ch=='y');
		printf("\n\n END OF PROGRAM");
		getch();
		return 0;
}
