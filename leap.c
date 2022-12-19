// find leap year using do while


#include<stdio.h>
main()
{
	int a=2000;
	int n=3000;
	
	
	do{
		if(a%4==0)
		{
				printf("%d\n",a);
		}
	
		a++;
	
	}
	while(a<=n);
}
