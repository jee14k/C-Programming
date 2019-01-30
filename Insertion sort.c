#include<stdio.h>
#include<conio.h>
main()
{
	int temp,n,i,j,arr[10];
	char ch;
	printf("Program to perform insertion sort \n");
	do
	{
		printf("\n Enter the number of elements: ");
		scanf(" %d",&n);
		printf("\n Enter %d elements: \n",n);
		for(i=0;i<n;i++)
		{
			scanf(" %d",&arr[i]);
		}
		for(i=1;i<n;i++)
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
		printf("\n The sorted array is: ");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	printf("\n Do you want to continue?(Y/N): ");
	scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
