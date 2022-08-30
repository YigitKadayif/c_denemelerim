#include <stdio.h>
void main(){
	int i;
	int exponent;
	int base;
	int based = 1;
	printf("Please enter a base number.");
	scanf("%d",&base);
	printf("Please enter a exponent number.");
	scanf("%d",&exponent);
	for(i=0;i<exponent;i++)
	{
		based*=base;
	}
	printf("%d",based);
}
