#include <stdio.h>

typedef struct{
	int No;
	char Ad[50];
	int Not;
}Ogrenci;

void DosyaYaz(Ogrenci ogrList[]){
	FILE *dosya;
	if((dosya = fopen("ogrenci.txt","w")) == NULL){
		printf("Dosya Acilirken Hata Ile Karsilasildi...");
		exit(1);
	}
	int i;
	for(i=0; i<2; i++){
		printf("%d. Ogrenci\nAdi : ",i+1);
		scanf("%s",&ogrList[i].Ad);
		printf("No : ");
		scanf("%d",&ogrList[i].No);
		printf("Notu : ");
		scanf("%d",&ogrList[i].Not);
		printf("\n");
		fprintf(dosya,"%s %d %d ",ogrList[i].Ad,ogrList[i].No,ogrList[i].Not);
	}
	printf("\nDosya kayit tamamlandi...\n");
	fclose(dosya);
}

void DosyaOku(){
	FILE *dosya;
	if((dosya = fopen("ogrenci.txt","r")) == NULL){
		printf("Dosya Acilirken Hata Ile Karsilasildi...");
		exit(1);
	}
	printf("\nDosya okunuyor...\n");
	int i;
	for(i=0; i<2; i++){
		Ogrenci ogr;
		fscanf(dosya,"%s %d %d",&ogr.Ad, &ogr.No, &ogr.Not);
		printf("\n%d.Ogrenci\nAdi : %s\nNo : %d\nNotu : %d\n",i+1,ogr.Ad,ogr.No,ogr.Not);
	}
	fclose(dosya);
}

main(){
	Ogrenci ogrenci[2];
	DosyaYaz(ogrenci);
	DosyaOku();
}

