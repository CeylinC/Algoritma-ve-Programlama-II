#include <stdio.h>
#include <stdlib.h>

int main(){
   char karakter;
   FILE *dosya;
   int satirSayisi = 0;

   dosya = fopen("test.txt", "r");	
   if(dosya ==NULL){
      printf("Dosya acilirken hata olustu!");
      exit(1);
   }

   karakter = fgetc(dosya);
	
    while(karakter != EOF) {
		if (karakter == '\n') {
			satirSayisi++;
		}
		karakter = fgetc(dosya);
	}
	
	if (karakter != NULL) {
		satirSayisi++;
	}
 
   fclose(dosya);
   printf("'test.txt' Dosyasindaki satir sayisi: %d\n", satirSayisi);
   return 0;
}
