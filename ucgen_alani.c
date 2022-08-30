#include <stdio.h>

void main(){
    int taban1 = 4;
	int yukseklik1 = 2;
	int bolum1 = 2;
	int hesap = taban1*yukseklik1/bolum1;
	printf("%d",hesap);   
	
	//Tabani ve yuksekligi verilen ucgenin alani hesaplanir.
	float taban2;
	float yukseklik2;
	float bolum2 = 2;
	printf("\nHosgeldiniz.Bir ucgen alani hesaplayacagiz.");
	printf("\nLutfen ucgenin taban uzunlugunu giriniz.");
	scanf("%f",&taban2);
	printf("\nLutfen taban uzunlugunun yuksekligini giriniz.");
	scanf("%f",&yukseklik2);
	printf("\nSonucunuz %f",taban2*yukseklik2/bolum2);

}
