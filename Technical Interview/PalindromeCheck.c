//palindrome check

#include<stdio.h>
int main(){
	int no=129,n,rem,res=0;
	n=no;
	 while(no>0){
	 	rem=no%10;//claculate remainer
	 	res=res*10+rem;//add reverse;
	 	no=no/10;
	 	
	 	
	 }
	 if(n==res){
	 	printf("the number is palindrome:%d",n);
	 }
	 else{
	 	printf("the number is not palindrome:%d",n);
	 }
}
