#include<stdio.h>
void main()
{
	int i,n;
	printf("enter a no. ");
	scanf("%d",&n);
	if(n>=1 && n<=100000)
	{
		printf("%d no is positive",n);
			}
		
	else
	{
	
		if(n==0)
		{
			printf("%d no is zero",n);
		}
		
		else
		if(n<0)
		{
		
			
				printf("%d no is negative",n);
	}
	 }
	
}
