#include<stdio.h>
#include<conio.h>
main()
{
	int ch,rear=-1,front=-1,arr[5],i;
	char opt;
	do
	{	
		system("cls");
		printf("QUEUES USING ARRAYS");
		printf("\n-------------------------------");
		printf("\n 1. Insertion \n\n 2. Deletion \n\n 3. Display");
		printf("\n-------------------------------");
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		printf("\n-------------------------------");
		switch(ch)
		{
			case 1:if(rear==-1 && front==-1)
					{
						rear=0;
						front=0;
						printf("\n 1. Insertion");
						printf("\n-------------------------------");
						printf("\n Enter a number: ");
						scanf("%d",&arr[rear]);
						break;
					}
					if(front!=-1 && rear<5)
					{
						rear++;
						printf("\n 1. Insertion");
						printf("\n-------------------------------");
						printf("\n Enter a number: ");
						scanf("%d",&arr[rear]);
						break;
					}
					break;
			case 2:if(front==-1)
					{
						printf("\n Queue is empty");
					}
					else
					{
						front++;
					}
					break;
			case 3:	printf("\n The queue is: ");
					for(i=front;i<=rear;i++)
					{
						printf("%d ",arr[i]);
					}
					getch();
					break;
			default:printf("\n!!! INVALID OPTION !!!");
		}printf("\n Do you want to continue(Y/N): ");
		scanf(" %c",&opt);
	}while(opt=='Y'||opt=='y');
	printf("\n END OF PROGRAM");
	getch();
	return 0;
}
