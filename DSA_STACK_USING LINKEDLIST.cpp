#include<stdio.h>
#include<stdlib.h>
struct node{
	int val;
	struct node*next;
};
struct node*head;
void push()
{
	int val;
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("Overflow\n");
	}
	else
	{
		printf("Enter the value\n");
		scanf("%d",&val);
		if(head==NULL)
		{
			ptr->val=val;
			ptr->next=NULL;
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;
			head=ptr;
		}
	}
}
void pop()
{
	int val;
	struct node*ptr;
	if(ptr==NULL)
	{
		printf("Underflow\n");
	}
	else
	{
		val=head->val;
		ptr=head;
		head=head->next;
		free(ptr);
		printf("Popped %d\n",val);
	}
}
void display()
{
	struct node*ptr;
	ptr=head;
	if(head==NULL)
	{
		printf("NO stack\n");
	}
	else
	{
		printf("The stack is\n");
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->val);
			ptr=ptr->next;
		}
	}
}
int main()
{
	int choice;
	while(choice!=4)
	{
		printf("Enter\n1 for PUSH\n2 for POP\n3 for DISPLAY\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
				
		}
	}
}
