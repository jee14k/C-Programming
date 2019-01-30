#include<stdio.h>
void func(void)__attribute__((constructor(2)));
void func2(void)__attribute__((constructor(1)));
void func2(void)
{
	printf("Method 2");
}
void func(void)
{
	printf("\nMethod 1");
}
main()
{
	printf("\nMain function");
}
/* constructor is always initialised before main function */ 

/* attribute is given to the functions */ 
