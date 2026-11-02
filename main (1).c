#include <stdio.h>

/* Mendefinisikan fungsi untuk mengecek bilangan prima atau bukan */
int CekPrima(int x)
{
 int prima = 1; /* Mula-mula prima bernilai 1 (true) */
 int i; /* Variabel untuk indeks pengulangan */

 if (x <= 1)
 {
 prima = 0; /* Bilangan <= 1 bukan bilangan prima */
 }
 else
 {
 for (i = 2; i <= (x / 2); i++)
 {
 if (x % i == 0)
 {
 prima = 0; /* Bilangan bukan prima */
 break; /* Menghentikan pengulangan */
 }
 }
 }

 return prima;
}

int main(void)
{
 int angka;

 printf("Masukkan sebuah bilangan: ");
 scanf("%d", &angka);

 if (CekPrima(angka))
 {
 printf("%d adalah bilangan prima.\n", angka);
 }
 else
 {
 printf("%d bukan bilangan prima.\n", angka);
 }

 return 0;
}