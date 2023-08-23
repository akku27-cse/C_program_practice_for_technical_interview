#include<stdio.h>
void main()
{
    int n,i,arr[20];
	printf("How many number do you enter:");
	scanf("%d",&n);
	printf("Enter number:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter number are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
