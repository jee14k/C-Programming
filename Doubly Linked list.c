#include<stdio.h>
#include<stdlib.h>
struct dlist
{
	int info;
	struct dlist *prev,*next;
};
typedef struct dlist node;
node *last=NULL;
void create(node*);
void fdisplay(node*);
void bdisplay();
main()
{
	node *head=NULL;
	int choice;
	char ch;
	do
	{
		system("cls");
		printf("Program to create & display,perform operations in a linked list");
		printf("\n -----------------------------------------------------------------");
		printf("\n 1. Creation \n\n 2.Forward Display \n\n 3. Backward Display");
		printf("\n -----------------------------------------------------------------");
		printf("\n\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=(node*)malloc(sizeof(node));
				   head->prev=NULL;
				   create(head);
				   break;
			case 2:if(head!=NULL)
				   		fdisplay(head);
					else
						printf("\n List is empty");
					break;
			case 3:if(head!=NULL)
				   		bdisplay(head);
					else
						printf("\n List is empty");
					break;
		}
		printf("\n Do you want to Continue?(Y/N): ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n END OF PROGRAM");
	getch();
	return 0;
}
void create(node *ptr)
{
	node *temp=ptr;
	char ch;
	printf("\n Enter the info: ");
	scanf("\n %d",&ptr->info);
	printf("\n Do you want another node?(Y/N): ");
	scanf("\n %c",&ch);
	if(ch=='Y'||ch=='y')
	{
		ptr->next=(node*)malloc(sizeof(node));
		temp=ptr->next;
		temp->prev=ptr;
		create(ptr->next);
	}
	else
	{
		ptr->next=NULL;
		last=ptr;
	}
}
void fdisplay(node *ptr)
{
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr=ptr->next;
	}
	printf("NULL");
}
void bdisplay(node *ptr)
{
	ptr=last;
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr=ptr->prev;
	}
	printf("NULL");
}
