#include <stdio.h>

void main(){
	//A program that shows which number is smaller.
	int first;
	int second;
	printf("Please enter a number.");
	scanf("%d",&first);
	printf("\nPlease enter another a number.");
	scanf("%d",&second);
	
	if(first<second)
	{
		printf("\nFirst number is smaller.");
	}
	else if(first>second)
	{
		printf("\nSecond number is smaller.");
	}
	else
	{
		printf("\nNumbers are equal.");
	}
}
