#include<stdio.h>
void main()
{
	int i,n;
	long int fact=1;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n fact of numbers:%ld"fact);
}
