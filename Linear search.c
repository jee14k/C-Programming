#include<stdio.h>
main()
{
	int arr[10],n,i,flag,ele;
	printf("\n Program to perform Linear search");
	printf("\n Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n The array is: ");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n Enter element to be searched: ");
	scanf("%d",&ele);
	flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
			printf("Element present in position %d",i+1);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\n Element not found");
	getch();
	return 0;
}
