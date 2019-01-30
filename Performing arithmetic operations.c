 #include<stdio.h>
#include<conio.h>
main()
{
	int a,b,res;
	char ch;
	printf("----------------------------------");
	printf("\n Perfoming arithmetic operations");
	printf("\n----------------------------------");
	printf("\n Addition +");
	printf("\n Subtraction -");
	printf("\n Division /");
	printf("\n Modulus %%");
	printf("\n----------------------------------");
	printf("\n Enter your choice: ");
	printf("\n----------------------------------\n");
	scanf("\n %c",&ch);
	printf("\n----------------------------------");
	printf("\n Enter 2 numbers: ");
	printf("\n----------------------------------\n");
	scanf("%d",&a);
	scanf("%d",&b);
	switch(ch)
	{
		case '+':res=a+b;
				 printf("\n Their sum is: %d",res);
				 printf("\n----------------------------------");
				 break;
		case '-':res=a-b;
				 printf("\n Their difference is: %d",res);
				 printf("\n----------------------------------");
				 break;
		case '*':res=a*b;
				 printf("\n Their product is: %d",res);
				 printf("\n----------------------------------");
				 break;
		case '/':if(b==0)
				 {
				 	printf("Value is infinte");
				 }
				 else
				 {
				 		res=a/b;
				 		printf("\n Their quotient is: %d",res);
				 		printf("\n----------------------------------");
			     }
				 break;
		case '%':res=a%b;
				 printf("\n Their remainder is: %d",res);
				 printf("\n----------------------------------");
				 break;	
	}
	printf("\n Thank you for your time");
	printf("\n----------------------------------");
	printf("\n End of program");
	getch();
	return 0;
}
