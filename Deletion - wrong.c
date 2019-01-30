#include<stdio.h>
#include<conio.h>
main()
{
	int arr[20],i,n,ele,pos;
	int sc;
	printf("Program to delete an element from the array \n");
	printf("\n Enter the number of elements of the array: ");
	scanf(" %d",&n);
	printf("\n Enter elements: \n");
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	printf("\n The array is: \n");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n 1: Delete by position \n 2: Delete by element \n\n");
	scanf("\n %d",&sc);
	switch(sc)
	{
		case 1: printf("\n Which position do you want to delete?: ");
			    scanf("%d",&pos);
				for(i=0;i<n;i++)
				{
					if(i!=pos-1)
						printf("%d ",arr[i]);
				} 
				break;
		case 2: printf("\n Which element do you want to delete?: ");
				scanf("%d",&ele);
				for(i=0;i<n;i++)
				{
					if(arr[i]!=ele)
					printf("%d ",arr[i]);
				} 
				break;			
	}
	getch();
	return 0;
}
