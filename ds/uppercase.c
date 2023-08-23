#include<stdio.h>
void main()
{
  char ch;
  printf("\enter any character:");
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z')
  {
  	printf("\n the characteris in upper case:%c",ch);
  	printf("\n Lower case chracter is:%c",ch+32);
  }
  else
  {
  	printf("\n The chracter is in lower case:%c",ch);
  	printf("\n upper case chracter is %c",ch-32);
  	
  }
  }
