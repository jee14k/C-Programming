#include<stdio.h>
#include<conio.h>
void fun();
main()
{
	int b=1;
	fun(b);
	getch();
	return 0;
}
void fun(int a)
{
	printf("%d %d %d",a,++a,a++);
}
