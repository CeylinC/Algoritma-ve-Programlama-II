#include <stdio.h>
#include <stdlib.h>

//�zyinemeli Fonksiyon Sorular�

/*
1.�rnek:
Kullan�c�dan ald���m�z say�n�n rakamlar�n� toplam�n� toplam de�i�kenine atayan bir fonksiyon olsun.
E�er toplam de�i�keni sadece bir basamaktan olu�muyorsa bir basamakl� oluncaya kadar rakamlar� toplay�p toplam de�i�kenine atans�n.
Sadece bir basamaktan olu�an toplam say�s�n� Konsola bast�r�n�z
	�R: Kullan�c� 789 say�s�n� girmi� olsun.
		7+8+9=24=toplam		2 basamakl�
		2+4=6=toplam		1 basamakl�
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
2.�rnek:
Kullan�c�dan al�nan 2 say�n�n ebob'unu hesaplay�p konsola yazd�r�n�z.
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

//Enum Sorular�

/*
3.�rnek:
Kullan�c�dan al�nan say� tek ise ekrana TEK, �ift ise CIFT de�erini konsola yazd�racak.
(!)37. slayt�n sorusu
*/
/*
typedef enum{//Tek-�ift
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
4. �rnek:
	Kullan�c�dan al�nan yolcu t�r�ne g�re kesilen otob�s �cretini ekrana yazd�r�n�z.
*/
/*
typedef enum{//��renci,+65,g�revli,Normal
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
