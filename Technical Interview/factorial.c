#include<stdio.h>
int main(){
	int i,no,fact=1;
 printf("enter any no:\n");
 scanf("%d",&no);
 for(i=1;i<=no;i++){
 	fact=fact*i;
 }
 printf("The factorial of %d = %d",no,fact);
}
