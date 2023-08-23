#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float D,deno,root1,root2;
	printf("\n Enter the value of a,d,c");
	sacnf("%d%d%d",&a,&b,&c);
	D=(b*b)-(4*a*c);
deno=2*a;
	if(D>0)
{
	printf("\n real roots");
	root1=(-b+sqrt(D))/deno;
	root2=(-b-sqrt(D))/deno;
	printf("\n root1=%f and root2=%f",root1,root2);
}
else if(D==0);
{
	peintf("\n equql roots");
	root1=root2=b/deno;
	printf("\n root1=%f and root2=%f",root1,root2);
}
 else 
printf("\n Imaginary roots")
}
  
