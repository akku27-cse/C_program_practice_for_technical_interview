#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks in five subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/500*100;
	if(per>=60)
	printf("first division\n");
	else
	{
		if(per>=50)
		printf("Second division\n");
		else
		{
			if(per>=40)
			printf("third division\n");
			else
			printf("fail\n");
		}
	}
	return 0;
}
