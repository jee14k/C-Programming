#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 5
struct stack
{
	int info;
	struct stack *link;
};
typedef struct stack node;
int element,value,count=0;
void push(int);
void display();
int pop();
node *top = NULL;
node *temp = NULL;
main()
{
	int ch;
	char opt;
	do
	{
		system("cls");
		printf("STACKS USING LINKED LISTS");
		printf("\n--------------------------------\n");
		START: printf("1. Push \n\n2. Pop \n\n3. Display");
		printf("\n--------------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		if(count==MAX)
		{
			printf("\n!!! STACK IS FULL !!! Try popping and then push this value \n");
			goto START;
		}
		switch(ch)
		{
			case 1:temp = (node*)malloc(sizeof(node));
				   printf("Enter the info: ");
				   scanf("%d",&temp->info);
				   push(temp->info);
				   display();
				   break;
			case 2:value = pop();
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
void push(int flag)
{
	count++;
	node *newnode=(node*)malloc(sizeof(node));
	newnode->info=flag;
	if(top==NULL)
	{
		top=newnode;
		newnode->link=NULL;
	}
	else
	{
		newnode->link=top;
		top=newnode;
	}
}
void display()
{
	node *temp=top;
	printf("\n--------------------------------");
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
int pop()
{
	node *temp;
	temp=top;
	top=top->link;
	printf("\n The value which is popped from the Stack is: %d",temp->info);
	free(temp);
}
