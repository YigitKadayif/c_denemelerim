#include <stdio.h>
void main()
{
	int i;
	int j;
	int total = 0;
	for(j=1;j<1000;j++)
	{
		for(i=1;i<j;i++)
		{
			if(j%i==0)
			{
				total+=i;
			}
		}
		if(total==j)
		{
			printf("%d ",j);
		}
		total = 0;
	}
}
