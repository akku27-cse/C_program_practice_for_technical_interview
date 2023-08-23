#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i,n;
	int *arr;
	printf("\n enter the number of elements:");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==null)
	{
		printf("\n number allocation is failed");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("\n enter the value %d of the array:",i);
		scanf("%d",&arr[i]);
	}
	printf("\n the array contains");
	for(i=0;i<n;i++)
	scanf("%d",arr[i]);
}
