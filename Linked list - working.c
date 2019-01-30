#include<stdio.h>
#include<stdlib.h>
struct list
{
	int info;
	struct list *link;
};
main()
{
    struct list *head=NULL,*temp;
	head=(struct list*)malloc(sizeof(struct list));
	printf("\n address of first node is %u",head);
	head->info=20;
	head->link=	(struct list*)malloc(sizeof(struct list));
	temp=head;
	printf("\n Address in temp is %u ",temp);
	printf("\n address of second node is %u",head->link);
	head=head->link;
	printf("\n Address in head is %u ",head);
	head->info=30;
	head->link=(struct list*)malloc(sizeof(struct list));
	head=head->link;
	head->info=40;
	head->link=NULL;
	while(temp!=NULL)
	{
		printf("\n address in temp=%u",temp);
		printf("\n value is\n");
		printf("%d  ",temp->info);
		temp=temp->link;	
	}
	printf("\n address in temp outside loop=%u",temp);
	return 0;
}
