#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
	int *ip;
  int idizi[5] = { 6, 20, 30, 65, 95 };

/*ip pointer'ýnýn kendi adresini yazdýrýr*/
  printf("isaretci bellek adresi: %p\n\n", &ip);

  ip = &idizi[4];

/*idizi deðiþkeninin 5. elemanýnýn adresini yazdýrýr*/
  printf("isaretcinin icerdigi adres: %p\n", ip);
  printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);

  ip-=2; // ip -= (4 * sizeof (int));

/*idizi deðiþkeninin 3. elemanýnýn adresini yazdýrýr.*/
  printf("isaretcinin icerdigi adres: %p\n", ip);
  printf("isaretcinin gosterdigi degisken degeri: %d\n\n", *ip);

  return 0;
}
/*
int main(void)
{ int *ip, id;
id = 274;
ip = &id;
printf("id degisken degeri: %d\n", id);
// ip iþaretçisinin adresini gösterdiði deðiþken deðerini artýrma
(*ip)++;
printf("id degisken degeri: %d", id);
return 0; }*/
/*
int main(){
	int m[5] = {5,10,15,20,25};
	int *p;
	p = m;
	printf("*p degeri = %d\n", *p);
	printf("*p+1 degeri = %d\n", *p+1);
	printf("*p+2 degeri = %d\n", *p+2);
	printf("*p+3 degeri = %d\n", *p+3);
	printf("*p+4 degeri = %d\n", *p+4);
	
	printf("*(p+1) degeri = %d\n", *(p+1));
	printf("*(p+2) degeri = %d\n", *(p+2));
	printf("*(p+3) degeri = %d\n", *(p+3));
	printf("*(p+4) degeri = %d\n", *(p+4));
}*/
