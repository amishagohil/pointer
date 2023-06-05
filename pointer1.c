#include<stdio.h>

main()
{
	int a=15,b=89;
	int *p1,*p2,*p3;
	p1= &a;
	p2= &b;
	p3=p2;
	p2=p1;
	p1=p3;
	
	printf("%u => %d\n",p1,*p1);
	printf("%u => %d\n",p2,*p2);
}
