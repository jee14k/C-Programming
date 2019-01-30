#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void array();
void linear();
void accept(int,int[]);
void display(int,int[]);
void binary();
void inssort(int,int[]);
void selsort(int,int[]);
main()
{
	int ch;
	char opt;
	do
	{
		system("cls");
		printf("********************************\n");
		printf("APPLICATIONS OF DATA STRUCTURES");
		printf("\n*******************************");
		START: printf("\nWhat do you want to work with?");
		printf("\n---------------------------------");
		printf("\n1. ARRAYS \n\n2. LINKED LISTS \n\n3. STACKS \n\n4. QUEUES");
		printf("\n---------------------------------\n");
		scanf("%d",&ch);
		if(ch<1||ch>4)
		{
			printf("\n!!!INVALID OPTION!!! \nPLEASE ENTER A NUMBER FROM 1 TO 4");
			goto START;
		}
		else
		{
			switch(ch)
			{
				case 1:printf("\nYOU HAVE CHOSEN ARRAYS\n");
					   printf("\nENJOY USING ARRAYS");
					   array();
				  	   break;
				default:printf("\n!!!INVALID OPTION!!! \nPLEASE ENTER A VALID DATA STRUCTURE");
			}
			
		}
	}while(opt=='Y'||opt=='y');
	printf("\n*******************************");
	printf("\nEND OF PROGRAM");
	getch();
	return 0;
}
void array()
{
	int inp,ser;
	printf("\n*******************************");
	printf("\nWELCOME TO THE WORLD OF ARRAYS");
	printf("\n*******************************");
	BEG: printf("\nWhat would you like to do with arrays?");
	printf("\n---------------------------------");
	printf("\n1. SEARCHING \n\n2. SORTING \n\n3. INSERTION OF ELEMENTS \n\n4. DELETION OF ELEMENTS");
	printf("\n---------------------------------\n");
	scanf("%d",&inp);
	if(inp<1||inp>4)
	{
		printf("\n!!!INVALID OPTION!!! \nPLEASE ENTER A NUMBER FROM 1 TO 4");
		goto BEG;
	}
	else
	{	
		switch(inp)
		{
			case 1:printf("\nYou have chosen SEARCHING");
				   printf("\nHow would you like to search your arrays?");
				   printf("\n---------------------------------");
				   SIS: printf("\n1. LINEAR SEARCH \n\n2. BINARY SEARCH");
				   printf("\n---------------------------------\n");
				   scanf("%d",&ser);
				   switch(ser)
				   {
				   		case 1:printf("\nYou have chosen LINEAR SEARCH");
				   			   linear();
				   			   break;
				   		case 2:printf("\nYou have chosen BINARY SEARCH");
				   			   binary();
				   			   break;
				   		default:printf("\n!!!PLEASE ENTER A VALID SEARCH OPTION");
				   				goto SIS;
				   }
				   break;
		}
    }
}
void linear()
{
	int n,boy[10],ele,i,flag=0;
	char okay;
	printf("\nWELCOME TO LINEAR SEARCH");
	printf("\n*******************************");
	NEW: printf("\nPlease enter the number of elements: ");
	scanf("%d",&n);
	if(n<1||n>10)
	{
		printf("!!!THE ARRAY CAN HAVE ONLY 10 ELEMENTS!!! \nENTER A NUMBER FROM 1 TO 10");
		goto NEW;
	}
	else
	{
		printf("\nEnter %d elements: ",n);
		accept(n,boy);
		printf("\nThe array is: ");
		display(n,boy);
		printf("\nEnter the element you want to search for: ");
		scanf("%d",&ele);
		for(i=0;i<n;i++)
		{
			if(boy[i]==ele)
			{
				flag=1;
				printf("\nELEMENT FOUND IN POSITION NUMBER %d",i+1);
				break;
			}
		}
		if(flag==0)
			printf("\nSORRY ----- ELEMENT NOT FOUND");
		printf("\nYou have finished using LINEAR SEARCH");
		printf("\nWould you like to do it again or try out something different?(Y/N)");
		scanf(" %c",&okay);
		if(okay=='Y'||okay=='y')
		{
			linear();
		}
		else
			array();
	}
}
void accept(int num,int arr[10])
{
	int i;
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void display(int size,int girl[10])
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",girl[i]);
	}
}
void binary()
{
	int length,jee[10],element,i,flag=0,mid,low,high,option;
	char choice;
	printf("\nWELCOME TO BINARY SEARCH");
	printf("\n*******************************");
	HI: printf("\nPlease enter the number of elements: ");
	scanf("%d",&length);
	if(length<1||length>10)
	{
		printf("\n!!!THE ARRAY CAN HAVE ONLY 10 ELEMENTS!!! \nENTER A NUMBER FROM 1 TO 10");
		goto HI;
	}
	else
	{
		printf("\nEnter %d elements: ",length);
		accept(length,jee);
		printf("\nThe array is: ");
		display(length,jee);
		printf("\nNOTE: BINARY SEARCH CAN ONLY BE DONE WITH SORTED ARRAYS. THEREFORE WE HAVE TO SORT THE ARRAY");
		printf("\nWhich sort technique would you like us to use?");
		printf("\n----------------------------------------------");
		BRO: printf("\n1. INSERTION SORT \n\n2. SELECTION SORT");
		printf("\n----------------------------------------------");
		scanf("%d",&option);
		if(option==1)
		{
			printf("\nYou have chosen INSERTION SORT");
			printf("\nThe array was:");
			display(length,jee);
			inssort(length,jee);
			printf("\nThe sorted array is: ");
			display(length,jee);	
		}
		else if(option==2)
		{
			printf("\nYou have chosen SELECTION SORT");
			printf("\nThe array was:");
			display(length,jee);
			selsort(length,jee);
			printf("\nThe sorted array is: ");
			display(length,jee);
		}
		else
		{
			printf("\n!!!INVALID OPTION!!! \nPLEASE ENTER A VALID SORT");
			goto BRO;
		}
		printf("\nThe array is now sorted \nWe can now do a binary search on it");
		printf("\nEnter the element you want to search for: ");
		scanf("%d",&element);
		high=length-1;
		low=0;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(jee[mid]<element)
			{
				low=mid+1;	
			}
			else if(jee[mid]==element)
			{
				printf("-----------------------------------");
				printf("\nElement found in position %d",mid+1);
				printf("\n-----------------------------------");
				break;	
			}
			else
			{
				high=mid-1;	
			}	
		}
		mid=(low+high)/2;
		if(low>high)
		{
			printf("Element not found in array");	
		}
	}
}
void inssort(int huge,int jeevan[10])
{
	int i,j,temp;
	for(i=1;i<huge;i++)
	{
		temp=jeevan[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp<jeevan[j])
			{
				jeevan[j+1]=jeevan[j];
			}
			else
				break;
		}
		jeevan[j+1]=temp;
	}
}
void selsort(int max,int johan[10])
{
	int min,pos,i,j;
	for(i=0;i<max;i++)
	{
		min=johan[i];
		pos=i;
		for(j=i+1;j<max;j++)
		{
			if(min>johan[j])
			{
				min=johan[j];
				pos=j;
			}
		}
		johan[pos]=johan[i];
		johan[i]=min;
	}
}
