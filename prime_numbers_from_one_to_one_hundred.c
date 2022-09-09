#include <stdio.h>
void main()
{
	int i = 2;
	int j;
	printf("2 ");
	int counter = 0;
	while(i<100)
	{
		i++;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter>0)
		{
			counter=0;
		}
		else
		{
			printf("%d ",i);
		}
	}	
}
