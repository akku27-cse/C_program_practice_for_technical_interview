#include<stdio.h>
void main()
{
	int n;
	float i,s=0.0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=1.0;i<=n;i++)
	{
		s=s+(1/i);
	}
	printf("sum=%f",s);
}
