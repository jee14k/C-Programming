#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
int count=1;
int mov;
int top_a=(max-1),top_b=-1,top_c=-1,j;
int a[]= {1,2,3,4,5},b[]= {7,7,7,7,7},c[]= {7,7,7,7,7};
int pop(int s[],int *n);
void push(int[max],int*,int);
void turn(int ar1[],int ar2[],int* n1,int *n2) 
{
	int t;
	if(ar1[0]<ar2[0])
	 {
		t=pop(ar1,n1);
		push(ar2,n2,t);
	} else {
		t=pop(ar2,n2);
		push(ar1,n1,t);
	}
}
void push(int s[max],int* n3,int t)
{
	int x;
	++*n3;
	for(x=*n3; x>0; x--)
		s[x]=s[x-1];
	s[0]=t;
}
int pop(int s[],int *n) {
	int i,temp;
	temp=s[0];
	for(i=0; i<*n; i++) {

		s[i]=s[i+1];
	}
	s[*n]=7;
	*n=*n-1;
	return temp;
}
void display(int A[],int B[],int C[],int *a,int *b,int *c)
{
	top_a=(max-1),top_b=-1,top_c=-1,j;
    
	int m,i,j;
	char ch;
	if(*a>=*b)
	m=*a;
	else
	m=*b;
	if(m<=*c)
	m=*c;
	for(i=0;i<=m;i++)
		{
			if(A[i]==7)
				ch=' ';
			else
				ch='*';
			for(j=0;j<A[i];j++)
			printf("%c",ch);
			printf("\t\t");
			if(B[i]==7)
				ch=' ';
			else
				ch='*';
			for(j=0;j<B[i];j++)
			printf("%c",ch);
			printf("\t\t");
			if(C[i]==7)
				ch=' ';
			else
				ch='*';
			for(j=0;j<C[i];j++)
			printf("%c",ch);
			printf("\t\t");	
			printf("\n");
			}
				printf("      A          B               C\n");
				printf("__________________________________________________\n");
				
			}
			void solution()
			{
				int top_a=(max-1),top_b=-1,top_c=-1,j;
            	int a[]= {1,2,3,4,5},b[]= {7,7,7,7,7},c[]= {7,7,7,7,7};
             	mov=(int)(pow(2.0,max)-1);

            	while(count<=31)
             	 {
		if(count%3==0)
			turn(b,c,&top_b,&top_c);
		else if(count%3==1)
			turn(c,a,&top_c,&top_a);
		else if(count%3==2)
			turn(b,a,&top_b,&top_a);
			display(a,b,c,&top_a,&top_b,&top_c);
			printf("\n\n");	
		count=count+1;
	}
    if(max!=2)
    display(a,b,c,&top_a,&top_b,&top_c);
    else
	display(a,c,b,&top_a,&top_c,&top_b);
			}
			
void isaccept(int q[],int r[],int *g,int* h)
{
   if(q[0]>r[0])
   {
   	printf("\n Invalid move. Please check rules.");
   }
   else
   {
   	push(r,h,pop(q,g));
   	
   }
}
main() 
{
	char chf,cht;
	int k,l;
	int* u,v,nv,nu; 
	do
	{
	do
	{
		k=0;
		printf("\n From: \n");
		scanf(" %c",&chf);
		printf("\n To: \n");
		scanf(" %c",&cht);
	     if(chf!='a'||chf!='b'||chf!='c'||cht!='a'||cht!='b'||cht!='c')
	    {
			k=1;
		 	printf("\n Invalid Input. Only three columns a,b,c. Enter again. \n");
	   	}
		if(chf=='a')
		{
			u=&a[0];
			nu=&top_a;
		}
		else if(chf=='b')
		{
			u=&b[0];
			nu=&top_b;
		}
		else if(chf=='c')
		{
			u=&c[0];
			nu=&top_c;
		}
		if(cht=='a')
		{
			v=&a[0];
			nv=&top_a;
		}
		else if(cht=='b')
		{
			v=&b[0];
			nv=&top_b;
		}
		else if(cht=='c')
		{
			v=&c[0];
			nv=&top_c;
		}
		isaccept(u,v,nu,nv);
		display(a,b,c,top_a,top_b,top_c);
	}while(k==1);
	printf("\n Do you wish to continue?\n Enter 'y' for yes, and 'n' for no. \n");
}while(getche=='y');
}
