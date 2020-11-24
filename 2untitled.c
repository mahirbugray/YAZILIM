#include <stdio.h>
#include <stdlib.h>

int main()
{
   int girilen_sayi, toplam = 0;

   while (girilen_sayi != 0){
    printf("Bir sayi giriniz:");
    scanf("%d" ,&girilen_sayi);
    toplam += girilen_sayi;
   }

   printf("Toplam:%d", toplam);

   return 0;
}


main.c de var ayný dizinde
baska bir klasör oluþturu musun sadece tek bir .c dosyasý olsun
tamam hocam deniyim
