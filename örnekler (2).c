#include <stdio.h>
#include <stdlib.h>

int main()
{
     int ogrenci_notu;
     printf("notu giriniz:");
     scanf("%d" ,&ogrenci_notu);

     if(ogrenci_notu>60 && ogrenci_notu<=65)
       printf("Harf karsiligi:DD");
     else if(ogrenci_notu>65 && ogrenci_notu<=70)
       printf("Harf karsiligi:CC");
     else if(ogrenci_notu>70 && ogrenci_notu<=75)
       printf("Harf karsiligi:CB");
     else if(ogrenci_notu>75 && ogrenci_notu<=80)
       printf("Harf karsiligi:BB");
     else if(ogrenci_notu>80 && ogrenci_notu<=90)
       printf("Harf karsiligi:BA");
     else if(ogrenci_notu>90 && ogrenci_notu<=100)
       printf("Harf karsiligi:AA");

     else
       printf("Uygun bir deger girmediniz!");
  return 0;
}
