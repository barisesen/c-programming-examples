#include <stdio.h>

void main()
{
	int sayi,kalan,sayac=1; //değisken tanımlamaları.

	printf("Basamaklarina ayirmak istediginiz sayiyi giriniz: ");
	scanf_s("%d", &sayi); //kullanıcıdan alınan sayının sayı adlı degıskene atanması.

	while (sayi > 0)
	{
		kalan = sayi % 10;
		
		//sayının 10 modunu aldıgımızda birler basamağını elde edeceğiz.
		
		sayi = sayi / 10;
		
		//sayıyı 10'a boldugumuzde int oldugu ıcın sayının tam kısmını alacak ve basamak sayısı bır azalmıs olacak ve
		//dongu 2.ye calıstıgında onlar basamagındakı sayı bırler basamagı halıne gelıcek.
		
		printf("%d.basamak = %d\n", sayac, kalan);//ekrana basamak degerını hangı basamak oldugunu sayacı kullanarak yazdırıyoruz.
		sayac++;
	}

}
