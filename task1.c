#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,sum=0;
	clrscr();
	printf("enter any value:- ");
	scanf("%d",&n);	
	
	for(num=1; num<=n; num++){
		printf("%d\n",num);
		
		sum=sum+n;
	}
	printf("ans = [ %d ]",sum);
	getch();
}


