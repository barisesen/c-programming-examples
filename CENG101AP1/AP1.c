#include <stdio.h>
#include <conio.h>


void main()
{
	int sayi, kalan, kalan_kare, yeni_sayi = 0; //degýsken tanýmlamalarý.

	printf("Lutfen bir sayi giriniz.");
	scanf_s("%d", &sayi); // kullanýcýdan alýnan sayýnýn degýskene atanmasý.
	printf("\n%d ,", sayi);

	//sayiyi kullanýcýdan aldým ve döngü burada baslýyor.
	while (sayi != 1 && sayi != 89 && sayi != 4 && sayi != 16 && sayi != 37 && sayi != 58 && sayi != 145 && sayi != 42 && sayi != 20){
		//sayýyý basamaklarýna ayýrma iþlemi
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
	