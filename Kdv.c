#include <stdio.h>

void main(){
	//Verilen bir urunun kdv'li fiyatini hesaplar.
	float fiyat;
	const float kdv1 = 118;
	const float kdv2 = 100;
	printf("Hosgeldiniz.Lutfen urununuzun fiyatini giriniz."); 
	scanf("%f",&fiyat);
	printf("\nSonucunuz %f",fiyat*kdv1/kdv2);
}
