#include <stdio.h>
#include <conio.h>


void main()
{
	int sayi, kalan, kalan_kare, yeni_sayi = 0; //degısken tanımlamaları.

	printf("Lutfen bir sayi giriniz.");
	scanf_s("%d", &sayi); // kullanıcıdan alınan sayının degıskene atanması.
	printf("\n%d ,", sayi);

	//sayiyi kullanıcıdan aldım ve döngü burada baslıyor.
	while (sayi != 1 && sayi != 89 && sayi != 4 && sayi != 16 && sayi != 37 && sayi != 58 && sayi != 145 && sayi != 42 && sayi != 20)
	{
		//sayıyı basamaklarına ayırma işlemi
		while (sayi > 0)
		{
			kalan = sayi % 10;
			kalan_kare = kalan * kalan;
			sayi = sayi / 10;
			yeni_sayi = yeni_sayi + kalan_kare;
		}
		sayi = yeni_sayi;
		yeni_sayi = 0;

		if (sayi != 1 && sayi != 89 && sayi != 4 && sayi != 16 && sayi != 37 && sayi != 58 && sayi != 145 && sayi != 42 && sayi != 20)
			printf("%d, ", sayi);
	
	}
		
	printf("\n\n%d ile dongu basladi.\n\n", sayi);
	
	_getch();
}
	
