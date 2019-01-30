#include<stdio.h>
#include<conio.h>
#define MAX 5
int top=-1,i=0,arr[MAX];
void push(int);
void pop();
void display();
main()
{
	char ch;
	do
	{
		system("cls");
		int opt;	
		printf("STACKS USING ARRAYS");
		printf("\n--------------------------------------------");
		printf("\n1. Push \n\n2. Pop \n\n3. Display");
		printf("\n--------------------------------------------");
		printf("\n Enter your choice:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:push(top);
			       display();
				   break;
			case 2:if(top>-1)
				   {
			    		pop();
						display();
				   }
					if(top==-1)
					{
						printf("\n!!! STACK UNDERFLOW !!!");
					}
				   break;
			case 3:display();
				   break;
			default:printf("\n!!! INVALID OPTION !!!");
		}
		printf("\n Do you want to continue?(Y/N): ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n END OF PROGRAM");
	getch();
	return 0;
}
void push(int ele)
{
	if(top<MAX-1)
	{
		printf("\n Enter the info: ");
		scanf("%d",&arr[++top]);
	}
	else
  		printf("\n!!! STACK OVERFLOW !!!");
}
void pop()
{
	top--;
}
void display()
{
	printf("\n The stack is \n");
	for(i=top;i>=0;i--)
	{
		printf("%d \n",arr[i]);
	}
}
