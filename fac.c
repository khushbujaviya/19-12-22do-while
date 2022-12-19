//calculate the factorial using dowhlile


#include<stdio.h>
main()
{
	int a=1;
	int n;
	int fac=1;
	
	printf("enter value n:");
	scanf("%d",&n);
	do{
	fac*=a;
	
	a++;
	}
	while(a<=n);
	printf("%d\n",fac);
			
}
