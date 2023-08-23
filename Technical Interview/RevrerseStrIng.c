#include<stdio.h>
int main(){
	int no=234,r,i;
	while(no>0){
		r=no%10;// claculate remander
		printf("%d",r);
		no=no/10;
	}
	
}
