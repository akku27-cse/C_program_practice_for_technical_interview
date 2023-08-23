#include<stdio.h>
int main(){
	float p,r,t,si;
	printf("enter principal:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("enter time");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest=%f",si);
	return 0;
}
