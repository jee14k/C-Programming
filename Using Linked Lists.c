#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct queue
{
	int info;
	struct queue *link;
};
typedef struct queue node;
void insert();
void display();
void delete();
node *front = NULL,*rear = NULL;
main()
{
	int ch;
	char opt;
	do
	{
		system("cls");
		printf("QUEUES USING LINKED LISTS");
		printf("\n--------------------------------\n");
		printf("1. Insert \n\n2. Delete \n\n3. Display");
		printf("\n--------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
				   break;
			case 2:delete();
				   break;	
			case 3:display();
					break;
			default:printf("\n!!! INVALID OPTION !!!");
		}
		printf("\n Do you want to continue?(Y/N): ");
		scanf(" %c",&opt);
	}while(opt=='Y'||opt=='y');
	printf("\n\n END OF PROGRAM");
	printf("\n--------------------------------\n");
	getch();
	return 0;
}
void insert()
{
	if(rear==NULL&&front==NULL)
	{
		front=(node*)malloc(sizeof(node));
		rear=front;
	}
	else
	{
		rear->link=(node*)malloc(sizeof(node));
		rear=rear->link;
	}
	printf("\nEnter the info: ");
	scanf("%d",&rear->info);
	rear->link=NULL;
}
void display()
{
	node *ptr=front;
	printf("--------------------------------");
	printf("\n The queue is: ");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr=ptr->link;
	}
}
void delete()
{
	node *temp;
	temp=front;
	front=front->link;
	free(temp);
	display();
	if(front==NULL)
	{
		printf("\nQueue is empty");
		rear=NULL;
	}
}
