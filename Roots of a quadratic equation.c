#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2,disc;
	float root1,root2;
	char opt;
	do
	{
		printf("\n----------------------------------\n");
		system("cls");
		printf("Enter the coefficients: \n");
		scanf("\n %f%f%f",&a,&b,&c);
		printf("\n----------------------------------");
		disc=(b*b)-4*a*c;
		if(disc==0)
		{
			printf("\n Roots are real and equal");
			root1=-b+sqrt(disc)/2.0*a;
			root2=-b-sqrt(disc)/2.0*a;	
			printf("\n %f",root1);
			printf("\n %f",root2);
		}
		else if(disc>0)
		{
			printf("\n Roots are real and unequal");
			root1=-b+sqrt(disc)/2.0*a;
			root2=-b-sqrt(disc)/2.0*a;	
			printf("\n %f",root1);
			printf("\n %f",root2);
		}
		else
		{
			printf("\n Imaginary roots");
			root1=-b/(2.0*a);
			root2=sqrt(abs(disc))/(2.0*a);
			printf("\n Root1 = %f + i%f \n",root1,root2);
			printf("\n Root2 = %f - i%f \n",root1,root2);
		}
		printf("\n Do you wish to continue(Y/N): ",&opt);
		fflush(stdin);	
		scanf("%c",&opt);	
		}while(opt=='Y');
		getch();
		return 0;	
}
