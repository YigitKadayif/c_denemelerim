#include <stdio.h>
void main()
{
	int i;
	int num;
	printf("Please enter a number.");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d ",i);
		}
	}
}
