#include <stdio.h>
void main()
{
	int i;
	int num;
	int start = 1;
	printf("Please enter a number from 0 to infinity.");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Number you have entered is invalid");
	}
	else if(num>0)
	{
		for(i=1;i<=num;i++)
		{
			start*=i;
		}
		printf("The factorial of the number you have entered is %d",start);
	}
	else
	{
		printf("The factorial of the number you have entered is 1.");
	}
}
