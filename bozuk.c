#include <stdio.h>
void main(){
	int a;
	int i;
	int s = 0;
	printf("Please enter a number.");
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		 s+=i;
		printf("%d\n",s);
	}
}

