#include <stdio.h>
void main()
{
	int i;
	int num;
	int counter = 0;
	do
	{
		printf("Please enter a positive number.");
		scanf("%d",&num);
	}
	while(num<0);
	if(num==1||num==0)
	{
		printf("Number you have entered is not prime.");
	}
	else if(num==2)
	{
		printf("Number you have entered is prime.");
	}
	else
	{
		for(i=2;i<num;i++)
		{
			if(num%i==0)
			{
				counter++;
			}
		}	
			if(counter>0)
			{
				printf("Number you have entered is not prime.");
			}
			else
			{
				printf("Number you have entered is prime.");
			}		
	}
}
