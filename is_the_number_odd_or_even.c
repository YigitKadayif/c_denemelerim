#include <stdio.h>

void main(){
//A program that calculates if the number is odd or even.
	int number;
		printf("Please enter a number.");
		scanf("%d",&number);
	if(number%2>0)
	{
		printf("\nNumber you have entered is odd.");
	}
	else
	{
		printf("\nNumber you have entered is even.");
	}
}
