#include<stdio.h>
#include<conio.h>
void main()
{
	int n,num,sum;
	clrscr();
	printf("enter any value:- ");
	scanf("%d",&n);	
	
	for(num=1; num<=n; num++){
			sum=sum*num;
		printf("%d\n",num);
		
	}
	printf("ans = [ %d ]",sum);
	getch();
}


