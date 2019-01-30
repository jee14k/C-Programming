#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10],i,n,j,temp;
	char ch;
	printf("Program to bubble sort the array \n");
	do
	{
		printf("\n Enter the number of elements in the array: \n");
		scanf(" %d",&n);
		printf("\n Enter %d elements: \n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("\n The array is: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}		
			}
		}
		printf("\n The sorted array is: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n Do you want to continue? (Y/N): ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n END OF PROGRAM");	
	getch();
	return 0;
}

