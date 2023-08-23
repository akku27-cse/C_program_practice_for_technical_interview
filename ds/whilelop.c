#include<stdio.h>
int main()
{
int i=1;
int*p;
p=&i;
while(*p<=10)
{
	printf("%d\n",*p);
	(*p)++;
}
}
