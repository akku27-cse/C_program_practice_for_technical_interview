#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 30
int stack[maxsize],top;
void push();
void pop();
void display();
void main()
 {
	clrscr ();
	int ch=1; top=-1;
	while (ch)
	{
		printf("\n1 push");
		printf("\n2 pop");
		printf("enter our choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push ();
				break ;
				case 2:
					pop ();
					break;
					default :
						exit (0);
		}
	}
	getch ();
}
void push()
{
	int no;
	if(top==maxsize-1)
	{
		printf("\n stack overflow");
		return;
	}
	top++;
	printf("\n enter number:\n");
	scanf("%d",&no);
	stack[top]=no;
	printf("\n element in stack are:\n");
	dispaly();
}
void pop()
{
	int no;
	if(top==-1)
	{
		printf("\n stack underflow");
		return;
	}
	else
	{
		top--;
		printf("\n element in stack are:\n");
		display();
	}
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
}
