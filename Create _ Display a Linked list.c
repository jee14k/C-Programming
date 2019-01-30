#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *link;
};
typedef struct list node;     // typedef is used to rename a datatype
void create(node*);
void display(node*);
main()
{
	node *head=NULL;
	int choice;
	char ch;
	do
	{
		system("cls");
		printf("Program to create and display a linked list");
		printf("\n-----------------------------------------");
		printf("\n1. Creation \n\n2. Display");
		printf("\n\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=(node*)malloc(sizeof(node));
				   create(head);
				   break;
			case 2:if(head!=NULL)
						display(head);
					else
						printf("\n List not created");
					break;
		}
		printf("\n Continue: ");
		fflush(stdin);
		ch=getchar();
	}while(ch=='Y'||ch=='y');
	getch();
	return 0;
}
void create(node *ptr)
{
	char ch;
	printf("\n Enter the info: ");	
	scanf("%d",&ptr->info);
	printf("\n Do you want another node?(Y/N): ");
	fflush(stdin);
	ch=getchar();
	if(ch=='Y'||ch=='y')
	{
		ptr->link=(node*)malloc(sizeof(node));
		create(ptr->link);
	}
	else
		ptr->link=NULL;
}
void display(node *ptr)
{
	printf("\n The list is: \n");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr=ptr->link;
	}
	printf("NULL");
}
