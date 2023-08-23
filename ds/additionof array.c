#include<stdio.h>
void main()
{
	int n,i,a[20],b[20],c[20];
	printf("How many number do you enter:");
	scanf("%d",&n);
	printf("Enter 1st Element:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter 2nd array element:");
	for(i=0;i<n;i++);
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	c[i]=a[i]+b[i];
	printf("addition of two array:\n");
	for(i=0;i<n;i++)
	printf("%d\f",c[i]);
}
