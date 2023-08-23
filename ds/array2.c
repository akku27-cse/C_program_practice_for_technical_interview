#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	int *p1,*p2,*p3;
	//taking input from user
	printf("Enter first number:");
	scanf("%d",&num1);
	printf("Enter second number:");
	scanf("%d",&num2);
	print("Enter third number:");
	scanf("%d",&num3);
	//assinging the address of input number to pointers
	p1=&num1;
	p2=&num2;
	p3=&num3;
	if(*p1 > *p2)
	{
		if(*p1 > *p3)
		{
			printf("%d is the largest number",*p1);
		}
		else
		{
			printf("%d is the largest number",*p3);
		}
	}
  else
  {
  	if(*p2 > *p3)
  	{
  		printf("%d is the largest number",*p2);
	  }
  }
  getch();
  return 0;
  }
