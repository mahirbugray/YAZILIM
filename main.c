#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayac, baslangic, bitis;
int toplam=0;

printf("Baslangic sayisini giriniz:");
scanf("%d" ,&baslangic);

printf("bitis sayisini giriniz:");
scanf("%d" ,&bitis);

for (sayac=baslangic; sayac<=bitis; sayac++){
 toplam = sayac + toplam;
}
 printf("toplam:%d",toplam);

 return 0;
}

