#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10],n,i,j,pos,min;
	char ch;
	printf("Program to perform selection sort \n");
	do
	{
		printf("\n Enter the number of elements: \n");
		scanf(" %d",&n);
		printf("\n Enter %d elements \n",n);
		for(i=0;i<n;i++)
		{		
			scanf(" %d",&arr[i]);
		}
		printf("\n The array is: ");
		for(i=0;i<n;i++)
		{
			printf(" %d",arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
			min=arr[i];
			pos=i;
			for(j=i+1;j<n;j++)
			{		
				if(min>arr[j])
				{
					pos=j;
					min=arr[j];
				}
			}
			arr[pos]=arr[i];
			arr[i]=min;
		}
		printf("\n The sorted array is: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n Do you want to continue?(Y/N): ");
		scanf("\n %c",&ch);
	}while(ch=='Y',ch=='y');
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
