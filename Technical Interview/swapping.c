#include<stdio.h>
int main(){
	int a=90,b=80,c;
	//with third veriable
//	c=a;
//	a=b;
//	b=c;
//	printf("After swapping:a=%d/n b=%d/n",a,b);
//// wihout third veriable
a=a+b;
b=a-b;
a =a-b;
printf("after swapping without third veriable: a=%d\n b=%d\n",a,b);
}
