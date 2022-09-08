#include<stdio.h>

void display(int arr[],int n)
{
for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
}

int indinsertion(int arr[],int size,int capacity,int element,int index)
{
	if(size>=capacity)
	{
	return -1;
	}
	for(int i=size-1;i>=index;i--)
	{
	arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}

int main(){
	int arr[50]={23,44,23,11,47};
	int size=5;
	int element=49;
	int index=3;
	display(arr,size);
	indinsertion(arr,size,50,element,index);
	size+=1;
	display(arr,size);
	return 0;
}
