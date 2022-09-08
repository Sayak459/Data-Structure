#include<stdio.h>

void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
}

int inddeletion(int arr[],int size,int capacity,int index)
{
	for(int i=index;i<=size;i++)
	{
	arr[i]=arr[i+1];
	}
	return 1;
}

int main(){
	int arr[50]={23,44,23,11,47};
	int size=5;
	int index=3;
	display(arr,size);
	inddeletion(arr,size,50,index);
	size-=1;
	display(arr,size);
	return 0;
}
