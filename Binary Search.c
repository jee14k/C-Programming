#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10],n,i,ele,mid,low,high;
	char ch;
	printf("Program to perform binary search \n");
	do
	{
		printf("\n Enter the number of elements: \n");
		scanf("%d",&n);
		printf("\n Enter %d elements \n",n);
		for(i=0;i<n;i++)
		{		
			scanf("%d",&arr[i]);
		}
		printf("\n Enter the element you want to search for: ");
		scanf("%d",&ele);
		low=0;
		high=n-1;
		int flag=0;
		while(low<=high && flag==0)
		{
			mid = (low+high)/2;
			if(arr[mid]<ele)
			{
				low=mid+1;
			}
			else if(arr[mid]==ele)
			{
				flag=1;
			}
			else 
			{
				high=mid-1;
			}
		}
		if(flag==0)
		  printf("\nElement does not exist");
		else 
		   printf("Element exist at %d position", mid+1);
		printf("\n Do you want to continue?(Y/N): ");
		scanf("\n %d",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
