#include<stdio.h>
int linear(int arr[100],int element,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==element)
		{
			printf("\nFound at index %d\n",i+1);
			break;
		}
	}
	printf("\nNot Found\n");
	return 0;
}
int binary(int arr[100],int element,int n)
{
	int beg,mid,end;
	beg=0;
	end=n-1;
	while(beg<end)
	{
		mid=(beg+end)/2;
		if(element==arr[mid])
		{
			printf("Found at %d\n",mid+1);
			break;
		}
		else if(element>arr[mid])
		{			
			beg=mid+1;
		}
		else		
		{	
			end=mid-1;
		}
		printf("Not found\n");
    }	
	return 0;
}
int main()
{
	int arr[100],n,i,element,choice;
	printf("Enter the number of array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element\n");
	scanf("%d",&element);
	while(choice!=5)
	{
		printf("Enter \n1 for LINEAR\n2 for BINARY\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				linear(arr,element,n);
				break;
			case 2:
				binary(arr,element,n);
				break;
			default:
				printf("\n Wrong choice");
				break;
		}
	}
}
