#include<stdio.h>
    int main()
{
	int arr[50],size,i;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	printf("Enter the numbers");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements of array are:  ");
    for(i=0;i<size;i++)
    {
    	printf("%d\n",arr[i]);
	}
}
