//print n to 1 using do while

#include<stdio.h>
main()
{
	int a;
	int n;
	
	scanf("%d",&a);
	scanf("%d",&n);
	
	do{
		printf("%d\n",a);
		a--;
		
	}
	while(a>=n);
}

