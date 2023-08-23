#include<stdio.h>
#include<conio.h>
#define max_size 100 //maximum array size
int main()
{
	int arr[max_size];
	int n,i;
	int *ptr=arr; //pointer to arr[0]
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter element in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		//move pointer to next array element
		ptr++;
	}
    //make sure that pointer again pointes back to first array element
    ptr=arr;
    printf("array element :");
    for(i=0;i<n;i++)
    {
    	//print value pointed by the pointer 
    	printf("%d",*ptr);
    	//move pointer to nextarray element
    	ptr++;
	}
	getch();
	return 0;
}
