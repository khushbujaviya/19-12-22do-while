// print evenno form 1 to n using do while


#include<stdio.h>
main()
{
	int a=1;
	int n;
	
	scanf("%d",&n);
	do{
		if(a%2==0)
		{
				printf("%d\n",a);
		}
	
		a++;
	
	}
	while(a<=n);
}
