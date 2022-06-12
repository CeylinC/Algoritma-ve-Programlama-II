#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *dosya;
    dosya  = fopen("sayilar.txt", "r");

    if (dosya == NULL){
        printf("Dosya okunamadi !..\n");
        exit(1);
    }
    
    int sayi, buyukSayi, kucukSayi, cursor, sayac = 0;
    while(cursor != EOF){
    	cursor = fscanf(dosya, "%d", &sayi);
    	if(sayac ==0){
    		buyukSayi = sayi;
    		kucukSayi = sayi;
		}
		else{
			if(sayi>buyukSayi) buyukSayi=sayi;
			if(sayi<kucukSayi) kucukSayi=sayi;
		}
		sayac++;
	}
	printf("En buyuk sayi : %d\nEn kucuk sayi : %d",buyukSayi,kucukSayi);
	fclose(dosya);
}

