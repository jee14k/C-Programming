#include<stdio.h>
main()
{
	int j,count=0;
	char str[20];
	printf("Program to find the number of vowels in a string");
	printf("\n Enter a string: ");
	gets(+str);
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
		{
			count++;
		}
	}
	printf("\n The number of vowels are: %d",count);
	getch();
	return 0;
}
