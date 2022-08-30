#include <stdio.h>

void main(){
	//Daire alaný ve cevre hesaplar.
	float yaricap;
	const float pi = 3.14;
	const float sabit = 2;
	printf("Hosgeldiniz.Lutfen bir yaricapi belirleyiniz.");
	scanf("%f",&yaricap);
	printf("\nDairenizin cevresi %f",sabit*pi*yaricap);
	printf("\nDairenizin alani %f",pi*yaricap*yaricap);

}
