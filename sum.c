//print sum 1 to n using dowhlile


#include<stdio.h>
main()
{
	int a=1;
	int n;
	int sum=0;
	
	printf("enter value n:");
	scanf("%d",&n);
	do{
	sum+=a;
	
	a++;
	}
	while(a<=n);
		printf("%d\n",sum);
			
}
