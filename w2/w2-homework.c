#include <stdio.h>
#include <stdlib.h>

//Özyinemeli Fonksiyon Sorularý

/*
1.Örnek:
Kullanýcýdan aldýðýmýz sayýnýn rakamlarýný toplamýný toplam deðiþkenine atayan bir fonksiyon olsun.
Eðer toplam deðiþkeni sadece bir basamaktan oluþmuyorsa bir basamaklý oluncaya kadar rakamlarý toplayýp toplam deðiþkenine atansýn.
Sadece bir basamaktan oluþan toplam sayýsýný Konsola bastýrýnýz
	ÖR: Kullanýcý 789 sayýsýný girmiþ olsun.
		7+8+9=24=toplam		2 basamaklý
		2+4=6=toplam		1 basamaklý
*/
/*
int BasamakToplami(int sayi, int toplam){
	toplam += sayi % 10;
	sayi /= 10;

	if(sayi>0){
		return BasamakToplami(sayi,toplam);
	}
	
	if(toplam <10){
		return toplam;
	}
	
	sayi=toplam;
	toplam=0;
	
	return BasamakToplami(sayi,toplam);
}

int main(){
	int sayi, toplam = 0;
	puts("Lutfen bir sayi giriniz:	");
	scanf("%d",&sayi);
	printf("Sonuc:	%d",BasamakToplami(sayi,toplam));
}*/

/*
2.Örnek:
Kullanýcýdan alýnan 2 sayýnýn ebob'unu hesaplayýp konsola yazdýrýnýz.
*/
/*
int Ebob(int sayi1, int sayi2){
	if(sayi2 == 0){
		return sayi1;
	}
	return Ebob(sayi2, sayi1 % sayi2);
}

int main(){
	int sayi1, sayi2;
	puts("Lutfen bir sayi giriniz:	");
	scanf("%d %d",&sayi1,&sayi2);
	printf("Sonuc:	%d",Ebob(sayi1,sayi2));
}
*/

//Enum Sorularý

/*
3.Örnek:
Kullanýcýdan alýnan sayý tek ise ekrana TEK, çift ise CIFT deðerini konsola yazdýracak.
(!)37. slaytýn sorusu
*/
/*
typedef enum{//Tek-Çift
	TEK,CIFT
}eTekCift;

eTekCift TekCift(int sayi){
	if(sayi % 2==0){
		return CIFT;
	}
	return TEK;
}

int main(){
	int sayi;
	
	puts("Lutfen bir sayi giriniz:	");
	scanf("%d",&sayi);
	
	switch(TekCift(sayi)){
		case CIFT:
			printf("%d cifttir...",sayi);
			break;
		case TEK:
			printf("%d tektir...",sayi);
			break;
		default:
			printf("Hata");
			break;
	}
}
*/

/*
4. Örnek:
	Kullanýcýdan alýnan yolcu türüne göre kesilen otobüs ücretini ekrana yazdýrýnýz.
*/
/*
typedef enum{//öðrenci,+65,görevli,Normal
	KARTSIZ=1,
	KARTLI,
	YASLI,
	OGRENCI,
	GOREVLI
}eYolcuTurleri;

int main(){
	eYolcuTurleri yolcu;
	puts("Otobusumuze Hosgeldiniz! Eger: \nKartiniz Yoksa 1\nKartiniz Varsa 2\n65 Yas Ve Ustuyseniz 3\nOgrenciyseniz 4\nGorevliyseniz 5\nTuslayiniz. Iyi Yolculuklar!");
	scanf("%d",&yolcu);
	
	switch(yolcu){
		case KARTSIZ:
			puts("6.00TL odendi...");
			break;
		case KARTLI:
			puts("4,50TL odendi...");
			break;
		case YASLI:
			puts("0TL odendi...");
			break;
		case OGRENCI:
			puts("2.75TL odendi...");
			break;
		case GOREVLI:
			puts("0TL odendi...");
			break;
		default:
			break;
	}
}
*/
