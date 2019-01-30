#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *link;	
};
typedef struct list node;
node *head=NULL;
void create(node*);
void display(node*);
node *insbeg(node*);
void insbet(node*);
void insend(node*);
node *delete(node*);
void search(node*);
main()
{
	int ch;
	char opt;
	do
	{
		
		printf("OPERATIONS ON LINKED LISTS");
		printf("\n1. Create \n\n2. Display \n\n3. Insert in beginning \n\n4. Insert in between \n\n5. Insert in the end");
		printf("\n\n6. Delete \n\n7. Search");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:head=(node*)malloc(sizeof(node));
				   create(head);
				   break;
			case 2:if(head!=NULL)
						display(head);
					else
						printf("\nList is empty");
					break;
			case 3:if(head!=NULL)
						insbeg(head);
					break;
			case 4:if(head!=NULL)
						insbet(head);
					break;
			case 5:if(head!=NULL)
						insend(head);
					break;
			case 6:if(head!=NULL)
						delete(head);
					break;
			case 7:if(head!=NULL)
						search(head);
					break;
		}printf("\n Do you want to Continue?(Y/N): ");
		scanf(" %c",&opt);
	}while(opt=='Y'||opt=='y');
	printf("\n END OF PROGRAM");
	getch();
	return 0;		
}
void create(node *ptr)
{
	char choice;
	printf("\nEnter the info: ");
	scanf("%d",&ptr->info);
	printf("\nDo you want another node?(Y/N): ");
	scanf(" %c",&choice);
	if(choice=='Y'||choice=='y')
	{
		ptr->link=(node*)malloc(sizeof(node));
		create(ptr->link);
	}
	else
		ptr->link=NULL;
}
void display(node *ptr)
{
	printf("\n The list is: ");
	while(ptr!=NULL)
	{
		printf("%d->",ptr->info);
		ptr=ptr->link;
	}
	printf("NULL");
}
node *insbeg(node *ptr)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the info: ");
	scanf("%d",&newnode->info);
	newnode->link=ptr;
	return(newnode);
}
void insbet(node *ptr)
{
	int pos,i=0;
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the info: ");
	scanf("%d",&newnode->info);
	printf("\nEnter the position: ");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		ptr=ptr->link;
		i++;
	}
	newnode->link=ptr->link;
	ptr->link=newnode;
}
void insend(node *ptr)
{
	node *newnode;
	int pos;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter the info: ");
	scanf("%d",&newnode->info);
	printf("\nEnter the position: ");
	scanf("%d",&pos);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	newnode->link=NULL;
	ptr->link=newnode;
}
node *delete(node *ptr)
{
	int pos,i;
	node *temp=ptr;
	node *temp1=ptr;
	printf("\nEnter the position you want to delete: ");
	scanf("%d",&pos);
	while(i<pos-2)
	{
		ptr=ptr->link;
		i++;
	}
	temp=temp1->link;
	temp1->link=temp->link;
	free(temp);
	return ptr;
}
