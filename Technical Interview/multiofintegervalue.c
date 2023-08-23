#include<stdio.h>
int main(){
	int no,n,cal,sum=1,i;
	printf("enter the value:\n");
	scanf("%d",&no);
	while(no!=0){
		cal=no%10;
		sum=sum*cal;
		no=no/10;
	}
	printf("the sum of value of integer is:\n%d",sum);
}
