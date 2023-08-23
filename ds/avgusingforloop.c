#include<stdio.h>
void mian()
{
	int i,n,sum=0;
	float avg;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		avg=sum/n;
	}
	printf("\n sum of n number :%d",sum);
	printf("\n average of n number :%f",avg);
}
