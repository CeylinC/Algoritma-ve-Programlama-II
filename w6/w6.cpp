#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//6. Hafta

//Fonksiyon Pointer'ý
/*
int Toplama(int a, int b){
	return a + b;
}

int Cikarma(int a, int b){
	return a - b;
}

int Carpma(int a, int b){
	return a * b;
}

int Bolme(int a, int b){
	return a / b;
}
int main(){
		int s1,s2;
		int (*fonkPtr[4])(int,int); //Fonksiyon iþaretçisi
		fonkPtr[0] = &Toplama;
		fonkPtr[1] = &Cikarma;
		fonkPtr[2] = &Carpma;
		fonkPtr[3] = &Bolme;

		printf("Lutfen 2 sayi giriniz: ");
		printf("1. Sayi: ");
		scanf("%d",&s1);
		printf("2. Sayi: ");
		scanf("%d",&s2);
		
		printf("%d ve %d'nin\nToplami : %d\nFarki : %d\nCarpimi : %d\nBolumu : %d",
		s1,s2,
		(*fonkPtr[0])(s1,s2),
		(*fonkPtr[1])(s1,s2),
		(*fonkPtr[2])(s1,s2),
		(*fonkPtr[3])(s1,s2));
	}
*/

// 3x4'luk matris'i kucukten buyuge sýralama
/*
int main(){
	int i, j, k, temp, *sutun[3], matris[3][4];
	
	srand(time(NULL));
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			matris[i][j] = rand()%20;
		}
		sutun[i] = matris[i];
	}
	printf("rastgele olusturulan matris:\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			for(k=j+1; k<4; k++){
				if(*(sutun[i]+j)>*(sutun[i]+k)){
					temp = *(sutun[i]+k);
					*(sutun[i]+k) = *(sutun[i]+j);
					*(sutun[i]+j) = temp;
				}
			}	
		}
	}
	printf("\nbuçukten buyuge dogru siralanmis satirli matris:\n");
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d\t",matris[i][j]);
		}
		printf("\n");
	}
}*/

//Geri Dönüþ Deðeri Pointer Olan Fonksiyon
/*
typedef enum{
	toplama,cikarma,carpma,bolme
}Islem;

void *HesapMakinesi(int sayilar[],int sonucDizi[]){
	int *sonuc;
	sonuc = sonucDizi;

	*(sonuc) = sayilar[0] + sayilar[1];
	*(sonuc + 1) = sayilar[0] - sayilar[1];
	*(sonuc + 2) = sayilar[0] * sayilar[1];
	*(sonuc + 3) = sayilar[0] / sayilar[1];
}

int main(){
	int sayilar[2], sonuc[4];
	Islem islem;
	
	puts("Lutfen 1. Sayiyi Giriniz");
	scanf("%d",&sayilar[0]);
	
	puts("Lutfen 1. Sayiyi Giriniz");
	scanf("%d",&sayilar[1]);
	
	puts("Lutfen yapmak istediginiz islemi giriniz\nToplama->0\nCikarma->1\nCarpma->2\nBolme->3");
	scanf("%d",&islem);
	
	HesapMakinesi(sayilar,sonuc);
	
	switch(islem){
		case toplama:
			printf("Toplamlari: %d",sonuc[0]);
			break;
		case cikarma:
			printf("Farklari: %d",sonuc[1]);
			break;
		case carpma:
			printf("Carpimlari: %d",sonuc[2]);
			break;
		case bolme:
			printf("Bölümleri: %d",sonuc[3]);
			break;
		default:
			printf("geceriz islem...");
			break;
	}
}*/

//Struct'lar ve Pointer
/*
typedef struct{
	char ad[50];
	int barkod;
	float fiyat;
}Urun;

int main(){
	Urun *urunPtr[2], urun1, urun2;
	int barkod;
	
	urunPtr[0] = &urun1;
	urunPtr[1] = &urun2;
	
	strcpy(urunPtr[0]->ad,"MarkaA Yogurt");
	urunPtr[0]->barkod = 123456789;
	urunPtr[0]->fiyat = 14.5;
	
	strcpy(urunPtr[1]->ad,"MarkaB Yogurt");
	urunPtr[1]->barkod = 987654321;
	urunPtr[1]->fiyat = 35.0;
	
	printf("Lutfen barkod Giriniz:\n%s : %d\n%s : %d\n",urunPtr[0]->ad,urunPtr[0]->barkod,urunPtr[1]->ad,urunPtr[1]->barkod);
	scanf("%d",&barkod);
	
	if(barkod == urunPtr[0]->barkod)
		printf("Urun Bilgileri:\n\tAd : %s\n\tFiyat : %.2f",urunPtr[0]->ad,urunPtr[0]->fiyat);
	else if(barkod == urunPtr[1]->barkod)
		printf("Urun Bilgileri:\n\tAd : %s\n\tFiyat : %.2f",urunPtr[1]->ad,urunPtr[1]->fiyat);
	else
		printf("Gecersiz Barkod!...");
	
}*/
