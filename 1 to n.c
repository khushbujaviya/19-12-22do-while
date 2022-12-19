//print 1 to n using do whileloop


#include<stdio.h>
main()
{
	int a=1,n;
	

	scanf("%d",&n);
	
	do{
		printf("%d\n",a);
		a++;
		
	}
	while(a<=n);
}
