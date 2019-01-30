#include<stdio.h>
main()
{  
    int a,b,add;
    int sum(int,int);
	printf("Program to find the sum of 2 numbers");
	printf("\n Enter 2 numbers:\n");
	scanf("\n %d %d",&a,&b);
	add = sum(a,b);
	printf("\n The sum is %d",add);
	return 0;
}
int sum(int a,int b)
{	
	int r;
	r=a+b;
	return(r);	
}
