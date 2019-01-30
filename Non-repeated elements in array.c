#include<stdio.h>
main()
{
	int arr[10];
	int i,count;
	printf("Enter the elements in the array: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]==i)
			count++;
	}
	printf("\n The number of non-repeated elements in the array are: %d",count);
	getch();
	return 0;
}
