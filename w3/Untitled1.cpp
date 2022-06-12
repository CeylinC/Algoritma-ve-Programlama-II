#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Struct*/
/*
struct hasta{
	int tc;
	char ad[20];
	char soyad[20];
};

main(){
	struct hasta hasta1;
	hasta1.tc=1234567890;
	strcpy(hasta1.ad,"Ceylin");
	strcpy(hasta1.soyad,"Caltepe");
	printf("Hasta Adi :\t%s\n",hasta1.ad);
	printf("Hasta Soyadi :\t%s\n",hasta1.soyad);
	printf("Hasta TC'si :\t%d\n",hasta1.tc);
}
*/

/*Geriye Struct döndüren fonksiyonlar*/
/*
struct Hasta{
	int tc;
	char ad[20];
	char soyad[20];
};

struct Hasta HastaEkleme(){
	struct Hasta hasta;
	printf("Hasta Adini Giriniz : ");
	scanf("%s",&hasta.ad);
	printf("Hasta Soyadini Giriniz : ");
	scanf("%s",&hasta.soyad);
	printf("Hasta TC Giriniz : ");
	scanf("%d",&hasta.tc);
	
	return hasta;
}

void HastaGosterme(struct Hasta hasta){
	printf("Hasta Adi : %s\n",hasta.ad);
	printf("Hasta Soyadi : %s\n",hasta.soyad);
	printf("Hasta TC : %d\n",hasta.tc);
}

int main(){
	struct Hasta hasta = HastaEkleme();
	HastaGosterme(hasta);
}*/

//Diziler ve Struct
/*
struct Hasta{
	int tc;
	char ad[20];
	char soyad[20];
};

struct Hasta HastaEkleme(){
	struct Hasta hasta;
	printf("Hasta Adini Giriniz : ");
	scanf("%s",&hasta.ad);
	printf("Hasta Soyadini Giriniz : ");
	scanf("%s",&hasta.soyad);
	printf("Hasta TC Giriniz : ");
	scanf("%d",&hasta.tc);
	
	return hasta;
}

void HastaGosterme(struct Hasta hasta){
	printf("Hasta Adi : %s\n",hasta.ad);
	printf("Hasta Soyadi : %s\n",hasta.soyad);
	printf("Hasta TC : %d\n",hasta.tc);
}

int main(){
	int n;
	printf("Kayit yapilacak hasta sayisini giriniz: ");
	scanf("%d",&n);
	printf("\n");
	struct Hasta hasta[n];

	for (int i=0; i<n; i++){
		printf("%d. Hastayi Giriniz: \n",i+1);
		hasta[i] = HastaEkleme();
		printf("\n");
	}
	
	for (int i=0; i<n; i++){
		printf("%d. Hasta: \n",i+1);
		HastaGosterme(hasta[i]);
		printf("\n");
	}
}
*/

/*Struct içinde Struct kullanýmý*/
/*
enum Polikinlik{
	Ortopedi,KBB,Goz
	}polikinlik;

struct Kisi{
	char ad[20];
	char soyad[20];
};

struct Doktor{
	struct Kisi kisi;
};

struct Hasta{
	int tc;
	struct Kisi kisi;
	struct Doktor doktor;
};

struct Doktor DoktorSorgulama(struct Doktor doktorListesi[]){
	printf("0 -> Ortopedi\n1 -> Goz\n2 -> KBB\nPolikinlik Seciniz : ");
	scanf("%d",&polikinlik);
	switch(polikinlik){
		case Ortopedi:
			return doktorListesi[0];
		case Goz:
			return doktorListesi[1];
		case KBB:
			return doktorListesi[2];
		default:
			printf("Gecersiz Islem!");
			break;
	}
}

struct Hasta HastaEkleme(struct Doktor doktorListesi[]){
	struct Hasta hasta;
	printf("Hasta Adini Giriniz : ");
	scanf("%s",&hasta.kisi.ad);
	printf("Hasta Soyadini Giriniz : ");
	scanf("%s",&hasta.kisi.soyad);
	printf("Hasta TC Giriniz : ");
	scanf("%d",&hasta.tc);
	hasta.doktor = DoktorSorgulama(doktorListesi);
	
	return hasta;
}

void HastaGosterme(struct Hasta hasta){
	printf("Hasta Adi : %s %s\n",hasta.kisi.ad, hasta.kisi.soyad);
	printf("Hasta TC : %d\n",hasta.tc);
	printf("Hasta'nin Gidecegi Doktor : %s %s\n",hasta.doktor.kisi.ad, hasta.doktor.kisi.soyad);
}

int main(){
	struct Doktor doktor1,doktor2,doktor3;
	
	strcpy(doktor1.kisi.ad,"Ahmet");
	strcpy(doktor2.kisi.ad,"Mehmet");
	strcpy(doktor3.kisi.ad,"Ayse");
	
	strcpy(doktor1.kisi.soyad,"Aslan");
	strcpy(doktor2.kisi.soyad,"Coban");
	strcpy(doktor3.kisi.soyad,"Odevli");
	
	struct Doktor doktorListesi[3] = {doktor1,doktor2,doktor3};
	
	struct Hasta hasta = HastaEkleme(doktorListesi);
	
	HastaGosterme(hasta);
}*/
