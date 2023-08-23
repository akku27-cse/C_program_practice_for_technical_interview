#include<stdio.h>
void main()
{
	int n,i;
	printf("enter value of the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d is even",i);
		else
		printf("%d is odd",i);
	}
}
