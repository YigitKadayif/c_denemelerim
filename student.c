#include <stdio.h>

void main(){
	//A program that calculates that if a student passed the class or not.
	int midterm;
	int final;
	printf("Please give the student's midterm exam note.");
	scanf("%d",&midterm);
	printf("\nPlease give the student's final exam note.");
	scanf("%d",&final);
	if(final<60)
	{
		printf("\nYou failed the class.");
	}
	else if(midterm*30/100+final*70/100<50)
	{
		printf("\nYou failed the class.");
	}
	else
	{
		printf("\nYou passed the class.");
	} 
}
