//multiplication table of nusing do while
#include<stdio.h>
main()
{
	int a=1;
	int n;
	printf("enter value:");
	scanf("%d",&n);
	do{
		printf("%d*%d=%d\n",n,a,n*a);
		a++;
	}
	while(a<=10);

}
