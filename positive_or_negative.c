#include <stdio.h>

void main(){
//A program that shows if a number is negative or positive.
	float number;
	printf("Please enter a number.");
	scanf("%f",&number);
	if(0>number)
	{
		printf("\nNumber you have entered is negative.");
	}
	else if(number>0)
	{
		printf("\nNumber you have entered is positive.");
	}
	else
	{
		printf("\nNumber you have entered is 0.");
	}
}
