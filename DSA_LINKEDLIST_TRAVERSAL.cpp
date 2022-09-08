#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
void lltraversal(struct node*ptr)
{
	while(ptr !=NULL)
	{
		printf("element-%d\n",ptr->data);
		ptr=ptr->next;
	}
}
struct node* insertAtFirst(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

int main()
{
struct node*head;
struct node*second;
struct node*third;
struct node*fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
head->data=56;
head->next=second;
second->data=67;
second->next=third;
third->data=78;
third->next=fourth;
fourth->data=90;
fourth->next=NULL;
lltraversal(head);
head=insertAtFirst(head,99);
lltraversal(head);
return 0;
}
