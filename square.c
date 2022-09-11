#include <stdio.h>
void main()
{
	int num;
	int i;
	int k;
	printf("Please enter a number.");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("x");
	}
	for(i=2;i<num;i++)
	{
		printf("\nx");
		for(k=2;k<num;k++)
		{
			printf(" ");
		}
		printf("x");
	}
	printf("\n");
	for(i=1;i<=num;i++)
	{
		printf("x");
	}
}
