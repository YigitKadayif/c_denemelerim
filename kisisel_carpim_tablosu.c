#include <stdio.h>
void main(){
	int i;
	int j;
	printf("Please enter a number from 1 to 10.");
	scanf("%d",&j);
		if(j>10)
		{
			printf("Number you have entered is invalid.");
		}
		else if(j<1)
		{
			printf("Number you have entered is invalid.");
		}
		else
		{
			for(i=1;i<=10;i++)
			{
			printf("%d*%d=%d ",j,i,i*j);	
			}
		}
}
