#include<stdio.h>
int main()
{
	char sex,ms;
	int age;
	printf("Enter age,sex,marital statues");
	scanf("%d%c%c",&age,&sex,&ms);
	if(ms=='M')
	printf("Drive is insured\n");
	else
	{
		if(sex=='M')
		{
			if(age>30)
			printf("driver is insured\n");
		}
		else
		{
			if(age>25)
			printf("Driver is insured\n");
			else
			printf("Driver is not insured\n");
		}
	}
	return 0;
}
