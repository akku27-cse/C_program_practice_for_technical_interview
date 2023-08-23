#include<stdio.h>
struct ArrayToStruct
{
	int x;
};
int main()
{
	struct Array toStruct
	obj_array[5];
	printf("Enter 5 integer velue one by one\n");
	for(int i=0;i<=4;i++)
	scanf("%d",&obj_array[i].x);
	printf("element is given below\n");
	for(int j=0;j<=4;j++)
	printf("%d",obj_array[j].x);
	}
