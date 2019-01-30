#include<stdio.h>
#include<conio.h>
main()
{
	int a[10],i,pos,ele,n;
	char c,ch;
	START:
	printf("Enter the number of elements you want to enter: \n");
	scanf("%d",&n);
	if(n<=10)
	{
		printf(" Enter the elements \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}		
		printf("\n The array is: \n");
		for(i=0;i<n;i++)
		{
			printf(" %d",a[i]);
		}
	}
	else
	{
		printf("\n The array can only have 10 elements");
   		goto START;
	}
	do
	{
		printf("\n Do you want to add an element(Y/N)? \n");
		scanf(" %c", &c);
		if(c=='Y'||c=='y')
		{
	   		if(n==10)
			{
				printf("\n The Array is full"); 
				goto END;
			}	 
			else
				printf("\n Enter the position of the new element: \n");
			scanf("%d",&pos);
			if(pos<10)
			{
				printf("\n Enter the new element: \n");
				scanf("%d",&ele);
				for(i=n;i>=pos;i--)
				{
					a[i]=a[i-1];
				}
				a[pos-1]=ele;
				printf("The new array is: \n");
				for(i=0;i<=n;i++)
				{
					printf("%d ",a[i]);	
				}
				printf("\n Do you want to add an element(Y/N)? ");
				scanf(" %c",&ch);
	    	}
	   		else
				printf("\n Position invalid");
		}
	}while(ch=='Y'||ch=='y');
	END: printf("\n\n End of Program");
	getch();
	return 0;
}
