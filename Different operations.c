#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *link;
};
int count = 0;
typedef struct list node;
void create(node*);
void display(node*);
node *insertbeg(node*);
void insertend(node*);
void insbet(node*);
node *delete(node*);
void search(node*);
main()
{
	node *head = NULL;
	int choice;
	char ch;
	do
	{
		system("cls");
		printf("Program to create & display,perform operations in a linked list");
		printf("\n -----------------------------------------------------------------");
		printf("\n 1. Creation \n\n 2. Display \n\n 3. Insert in the beginning");
		printf("\n\n 4. Insert at the end \n\n 5. Insert in between \n\n 6. Delete \n\n 7. Search");
		printf("\n -----------------------------------------------------------------");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=(node*)malloc(sizeof(node));
				   create(head);
				   break;
			case 2:if(head!=NULL)
				   		display(head);
				   else 
				   		printf("\n List is not created");
				   break;
			case 3:if(head!=NULL)
				   {
						head=insertbeg(head);
						display(head);   	
				   }
				   else
				   		printf("\n List is not created");	
			       break;
			case 4:if(head!=NULL)
				   {
						insertend(head);   	
				        display(head);				   
				   }
				   else
				   		printf("\n List is not created");
				   break;
			case 5:insbet(head);
				   display(head);	
				   break;
			case 6:if(head!=NULL)
				   		delete(head);
					else 
						printf("\n List is empty");
					display(head);
				   break;
			case 7:search(head);
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
	count++;
	char ch;
	printf("\n Enter the info: ");
	scanf("\n %d",&ptr->info);
	printf("\n Do you want another node?(Y/N): ");
	scanf("\n %c",&ch);
	if(ch=='Y'||ch=='y')
	{
		count++;
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
node *insertbeg(node *ptr)
{
	count++;
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	printf("\n Enter the info: ");
	scanf("\n %d",&newnode->info);
	newnode->link=ptr;
	return(newnode);
}
void insertend(node *ptr)
{
	count++;
	node *newnode;
	newnode=(node *)malloc(sizeof(node));
	printf("\n Enter the info: ");
	scanf("\n %d",&newnode->info);
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	newnode->link=NULL;
	ptr->link=newnode;
}
void insbet(node *ptr)
{
	count++;
	int i=1,pos;
	node *newnode;
	newnode = (node *)malloc(sizeof(node));
	printf("\n Enter the info: ");
	scanf("\n %d",&newnode->info);
	display(ptr);
	printf("\n Enter the position: ");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		ptr=ptr->link;
		i++;
	}
	newnode->link=ptr->link;
	ptr->link=newnode;
}
void search(node *ptr)
{
	int ele,flag=0;
	display(ptr);
	printf("\n Enter the element to be searched for: ");
	scanf("%d",&ele);
	while(ptr!=NULL)
	{
		if(ptr->info==ele)
		{
			flag=1;
			break;
		}
		else
		{
			ptr=ptr->link;
		}
	}
	if(flag==1)
	{
		printf("Element found!");
	}
	else
		printf("\n Element not found");
}
node *delete(node *ptr)
{
	int pos,i=0;
	node *temp=ptr,*temp1=ptr;
	display(ptr);
	printf("\n Enter the position you want to delete: ");
	scanf("%d",&pos);
	if(ptr->link==NULL)
	{
		printf("\n NULL");
	}
	if(pos<=count)
	{
		if(pos==1)
		{
			ptr=ptr->link;	
		}
		while(i<pos-2)
		{
			temp1=temp1->link;
			i++;
		}
		temp=temp1->link;
		temp1->link=temp->link;
		free(temp);
		count--;
		return ptr;
	}
	else
		printf("\n Invalid positon");
}
