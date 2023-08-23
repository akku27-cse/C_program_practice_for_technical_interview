#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,row1,col1,row2,col2,rowsum,colsum;
	int mat1[5][5],mat2[5][5],sum[5][5];
	printf("\n Entar the number of row in first matrix:");
	scanf("%d",&row1);
	printf("\n Entar the numbar of column in first matrix:");
	scanf("%d",col1);
	printf("\n Enter the number of row i  second matrix:");
	scanf("%d",&row2);
	printf("\n Enter the number of column in second matrix:");
	scanf("%d",&col2);
	if(row1!=row2||col1!=col2)
	{
		printf("\n the number of rows and column of both matrix must be equal:");
		getch();
	}
	rowsum=row1;
	colsum=col1;
	printf("\n enter the element of first matrix:");
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		scanf("%d",mat1[i][j]);
	}
	printf("\n enter the element of second matrix:");
	{
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			scanf("%d",mat2[i][j]);
		}
		for(i=0;i<rowsum;i++)
		{
			for(j=0;j<colsum;j++)
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
		printf("\n the element of the sum matrix:");
		for(i=0;i<rowsum;i++)
		{
		  printf("n");
			for(j=0;j<colsum;j++)
		printf("\t%d",sum[i][j]);	
		}
	}
}
