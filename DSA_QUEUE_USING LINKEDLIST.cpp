#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*front;
struct node*rear;
void enqueue()
{
	int val;
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		printf("Enter value\n");
		scanf("%d",&val);
		ptr->data=val;
		if(front==NULL)
		{
			front=ptr;
			rear=ptr;
			front->data=NULL;
			rear->data=NULL;		
		}
		else
		{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
	}
}
void dequeue()
{
	int val;
	struct node*ptr;
	if(ptr==NULL)
	{
		printf("Underflow\n");
		return;
	}
	else
	{
		ptr=front;
		front=front->next;
		free(ptr);
	}
}
void display()
{
	struct node*ptr;
	ptr=front;
	if(front==NULL)
	{
		printf("No queue\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}
int main()
{
	int choice;
	while(choice!=4)
	{
		printf("Enter \n1 for ENTER\n2 for DELETE\n3 for DISPLAY\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
		}
	}
}
