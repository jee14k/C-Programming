	#include<stdio.h>
	#include<conio.h>
	
	main()
	{
		int ch;
		
	do{
		int a[10],i,j,ele,pos, choice, last=0;
		system("cls");
		printf("Program to insert a number in an array");
	
		do
		{ 
		if(last>10)
		printf("Number exceeds the limit of the array\n");
		printf("\nEnter the number of elements");
		scanf("%d", &last);
		}while(last>10);
	
	printf("enter elements: ");
		
	for(i=0;i<last;i++)
	
			scanf("%d",&a[i]);
		
	
		
		
	
	if(last<9)
	{
	printf("print element to insert: ");
		scanf("%d",&ele);
	for(i=0;i<=last;i++)
	{
		if(a[i]>=ele)
		{
			pos=i;
			break;
		}
	}
	if(a[last]<ele)
	pos=last;
	
	
		for(i=last;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=ele;
	}
	else printf("no number can be entered as array overflowing");
	
		printf("array: [");
		for(j=0;j<last+1;j++)
		printf("%d ", a[j]);
		printf(" ]");
		printf("\nPress 1 to continue");
		printf("\nPress 2 to end program\n");
		scanf("%d",&ch);
	}while(ch==1);
		printf("END OF PROGRAM");
		return 0;
	}
