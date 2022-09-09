#include <stdio.h>
void main()
{
	int i;
	int num;
	int j;
	int counter = 0;
	printf("Please enter a number.");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					counter++;
				}
			}
			if(counter>0)
			{
				counter = 0;
			}
			else
			{
				printf("%d ",i);
			}
		}
	}
}
