#include<stdio.h>
int main(){
	char no;
	printf("enter any one chracter :");
	scanf("%c",&no);
	if(no=='a'|| no=='e'||no=='i'||no=='o'||no=='u'||no=='A'||no=='E'||no=='I'||no=='O'||no=='U'){
		printf("vowel");
	}
	else{
		printf("consonent");
	}
}
