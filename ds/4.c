#include<stdio.h>
int main()
{
	int bonus,cy,yoj,yos;
	printf("enter current year and year of joining:");
	scanf("%d%d",&cy,&yoj);
	yos=cy-yoj;
	if(yos>3)
	{
		bonus=2500;
		printf("bonus=Rs.%d\n",bonus);
	}
	return 0;
}
