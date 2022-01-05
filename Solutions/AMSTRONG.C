#include<stdio.h>
#include<conio.h>
void main()
{
	int no,n,rev=0,rem;
	clrscr();
	printf("\n Enter the number:");
	scanf("%d",&no);
	n=no;
	while(no>0)
	{
		rem=no%10;
		rev=rev+rem*rem*rem;
		no/=10;
	}
	if(rev==n)
	{
		printf("\n %d is amrstrong",n);
	}
	else
	{
		printf("\n %d is not amstrong",n);
	}
	getch();
}
