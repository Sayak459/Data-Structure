#include<stdio.h>
void bubble(int arr[100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void selection(int arr[100],int n)
{
	int key;
	for(int i=0;i<n;i++)
	{
		key=i;
		for(int j=i+1;j<=n-1;j++)
		{
			if(arr[j]<arr[j-1])
			{
				key=j;
				int temp;
				temp=arr[key];
				arr[key]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
void insertion(int arr[100],int n)
{
	int key;
	for(int i=1;i<n;i++)
	{
		key=i;
		if(arr[key]<arr[key-1])
		{
			int temp;
			temp=arr[key];
			arr[key]=arr[key-1];
			arr[key-1]=temp;
		}
	}
}
void merger(int arr[100],int low,int mid,int high)
{
	int i,j,k;
	int n1=mid-low+1;
	int n2=high-mid;
	int leftarray[n1],rightarray[n2];
	for(int i=0;i<n1;i++)
	{
		leftarray[i]=arr[low+i];
	}
	for(int j=0;j<n2;j++)
	{
		rightarray[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=low;
	while(i<n1&&j<n2)
	{
		if(leftarray[i]<=rightarray[j])
		{
			arr[k]=leftarray[i];
			i++;
		}
		else
		{
			arr[k]=rightarray[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=leftarray[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=rightarray[j];
		j++;
		k++;
	}
}
void merge(int arr[100],int low,int high)
{
	if(low<high)
	{
	int mid=(low+high-1)/2;
	merge(arr,low,mid);
	merge(arr,mid+1,high);
	merger(arr,low,mid,high);
	}
}
int main()
{
	int arr[100],n,choice;
	printf("Enter the number of the elements\n");
	scanf("%d",&n);
	printf("The array is\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	do
	{
		printf("Enter\n1 for BUBBLE\n2 for SELECTION\n3 for INSERTION\n4 for MERGE\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			bubble(arr,n);
			break;
		case 2:
			selection(arr,n);
			break;
		case 3:
			insertion(arr,n);
			break;
		case 4:
			merge(arr,0,n-1);
			break;
		case 5:
			break;
		}
		printf("The sorted array is\n");
		for(int i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	}while(choice!=5);
}
