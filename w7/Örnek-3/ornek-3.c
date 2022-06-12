#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Kisi{
	char ad[20];
	char soyad[20];
};

struct Doktor{
	struct Kisi kisi;
	char polikinlik[20];
};

struct Hasta{
	int tc;
	struct Kisi kisi;
	struct Doktor doktor;
};

struct Doktor DoktorSorgulama(){
	FILE *doktorDosya;
	doktorDosya = fopen("doktor.txt","r");
	if(doktorDosya == NULL){
		printf("Dosya Acilirken Hata Ile Karsilasildi...");
		exit(1);
	}
	
	int cursor, i=0;
	struct Doktor doktorList[3];
	char polikinlik[20];
	
	printf("Polikinlikler:\n");
	while (cursor != EOF){
		cursor = fscanf(doktorDosya,"%s %s %s",&doktorList[i].kisi.ad,&doktorList[i].kisi.soyad,&doktorList[i].polikinlik);
		printf("%s\n",doktorList[i].polikinlik);
		i++;
	}
	fclose(doktorDosya);

	printf("Lutfen Polikinlik Seciniz:\n");
	scanf("%s",&polikinlik);
	
	for(i=0; doktorList[i].polikinlik != '\0'; i++){
		if(!(strcmp(polikinlik,doktorList[i].polikinlik))){
			return doktorList[i];
		}
		else{
			printf("Gecersiz Islem!...");
			return DoktorSorgulama();
		}
	}
}

struct Hasta HastaEkleme(){
	struct Hasta hasta;
	printf("Hasta Adini Giriniz : ");
	scanf("%s",&hasta.kisi.ad);
	printf("Hasta Soyadini Giriniz : ");
	scanf("%s",&hasta.kisi.soyad);
	printf("Hasta TC Giriniz : ");
	scanf("%d",&hasta.tc);
	hasta.doktor = DoktorSorgulama();
	
	return hasta;
}

void HastaGosterme(struct Hasta hasta){
	printf("Hasta Adi : %s %s\n",hasta.kisi.ad, hasta.kisi.soyad);
	printf("Hasta TC : %d\n",hasta.tc);
	printf("Hasta'nin Gidecegi Doktor : %s %s\n",hasta.doktor.kisi.ad, hasta.doktor.kisi.soyad);
}

int main(){
	struct Hasta hasta = HastaEkleme();
	HastaGosterme(hasta);
}
