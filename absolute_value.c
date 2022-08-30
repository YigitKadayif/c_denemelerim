#include <stdio.h>

void main(){
//A program that calculates a number's absolute value.
	int number;
		printf("Please enter a number.");
		scanf("%d",&number);
	if(number<0)
	{
		printf("\nThe absolute value of the number you have entered is %d",number*-1);
	}
	else
	{
		printf("\nThe absolute value of the number you have entered is %d",number);
	}
}
