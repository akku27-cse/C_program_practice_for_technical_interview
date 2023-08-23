#include<stdio.h>
int main(){
	int i,base,power,fact=1;
	printf("enter base:\n");
 scanf("%d",&base);
 printf("enter power:\n");
 scanf("%d",&power);
 for(i=1;i<=power;i++){
 	fact=fact*base;
 }
 printf("result=%d",fact);
}
