#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int info;
	struct stack *link;
};
typedef struct stack node;
void push();
void display();
void pop();
node *top = NULL;
main()
{
	int ch;
	char opt;
	do
	{
		system("cls");
		printf("STACKS USING LINKED LISTS");
		printf("\n--------------------------------\n");
		printf("1. Push \n\n2. Pop \n\n3. Display");
		printf("\n--------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
				   display();
				   break;
			case 2:pop();
				   display();
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
void push()
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	printf("Enter the info: ");
	scanf("%d",&temp->info);
	if(top==NULL)
	{
		temp->link=NULL;
		top=temp;
	}
	else
	{
		temp->link=top;
		top=temp;
	}
}
void display()
{
	node *temp=top;
	printf("--------------------------------");
	printf("\n The stack is: ");
	while(temp!=NULL)
	{
		printf("\n %d",temp->info);
		temp=temp->link;
	}
	if(top==NULL)
	{
		printf("\n Stack is empty \n--------------------------------");
	}
}
void pop()
{
	node *temp;
	temp=top;
	top=top->link;
	free(temp);
}
