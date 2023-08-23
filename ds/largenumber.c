#include<stdio.h>
void main()
{
	int a,b,large;
	printf("\n enter two numbers:");
	scanf("%d%d",&a,&b);
	if(a>b)
	large=a;
	else
	large=b;
	printf("\n the large number is :%d",large);
}
