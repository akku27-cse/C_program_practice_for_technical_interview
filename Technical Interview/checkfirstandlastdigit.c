#include<stdio.h>
int main(){
	int no,last,first;
		printf("enter the value:\n");
	scanf("%d",&no);
	last=no%10;
	while(no!=0)
	{
		first,    =no%10;
		no=no/10;
	}
	printf("the first digit is=%d and the last digit id=%d",first,last);
}
