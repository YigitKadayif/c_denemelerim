#include <stdio.h>

void main(){
//A program that tests a "x" number is divisible by a "y" number.
	int x;
	int y;
		printf("Please enter a x number.");
		scanf("%d",&x);
		printf("\nPlease enter a y number.");
		scanf("%d",&y);
	if(x%y>0)
	{
		printf("\nx is not divisible by y");
	}
	else
	{
		printf("\nx is divisible by y");
	}
}
