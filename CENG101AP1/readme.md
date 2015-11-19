#Soru
*Algoritmalar ve Programlama Dersi Ödev 1

Verilen pozitif bir tamsayının basamak değerlerinin kareleri toplandığında ortaya yeni bir sayı çıkmaktadır. Bu işlemi ortaya çıkan yeni sayılar için tekrarladığınızda ortaya iki farklı durum çıkmaktadır.

   Ya 1 sayısına ulaşıp ürettiğiniz sonraki sayılar da hep 1 olacak  
   Ya da 4, 16, 37, 58, 89, 145, 42, 20, 4, 16, 37, 58, 89, ... gibi bir döngü ile karşılaşacaksınız
  
Örneğin 45 sayısı ile başlarsak:  
    42+52=41  
  42+12=17  
  12+72=50  
  52+02=25  
  22+52=29  
  22+92=85  
  82+52=89  
Bu adımdan sonra sürekli yukardaki döngü içindeki sayılar üretilecektir.

Örneğin 23 sayısı ile başlarsak:  
22+32=13  
12+32=10  
12+02=1  
12+02=1  
Bu adımdan sonra sürekli 1 değeri üretilecektir.

Buna göre sayılar döngüye girene kadar üretilen sayıları gösteren C programını yazınız.

Programın örnek çalışması aşağıda verilmiştir.

Sayiyi girin: 987325  
987325, 232, 17, 50, 25, 29, 85,  
89 ile dongu basladi.  

Sayiyi girin: 23  
23, 13, 10,  
1 ile dongu basladi.  

Sayiyi girin: 88  
88, 128, 69, 117, 51, 26, 40,  
16 ile dongu basladi.  

Sayiyi girin: 989  
989, 226, 44, 32, 13, 10,  
1 ile dongu basladi.  
