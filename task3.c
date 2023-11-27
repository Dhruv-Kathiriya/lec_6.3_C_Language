#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num;
	clrscr();
	printf("enter any value:- ");
	scanf("%d",&n);	
	
	for(num=1; num<=10; num++){
	
		printf("%d*%d=%d\n",n,num,n*num);
		
	}
	getch();
}
