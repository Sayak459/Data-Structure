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
struct node* insertAtEnd(struct node*head,int data)
{
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
	
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
head=insertAtEnd(head,99);
lltraversal(head);
return 0;
}
