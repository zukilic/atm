/*
 * atm.c
 * Tek bir kullanicinin hesabini tutan bank atm programi
 * Zeynep �lk� K�l��
 * medeniyet ID
 */


#include <stdio.h>

/*bu iki degisken const olarak tanimlandigi icin 
 * programda calisma esnasinda degeri degistirelemez*/
const int PSWRD = 1234;         /*Kullanicinin sifresi*/
const int INIT_BALANCE = 100;   /* baslangic bakiye */

int main()
{
	printf("Merhaba bankaniza hosgeldiniz!\n");
	
	int pasword=0; /* Kullan�c�dan al�nacak
					* �ifrenin bankan�n �ifresiyle
					* uyu�up uyu�mad���na bakmak i�in
					* tan�mlanan bir de�i�ken*/
    printf("Lutfen sifrenizi giriniz >\n");
    scanf("%d",&pasword);	/* Kullan�c�n�n �ifresini
							 * girece�i b�l�m. */
    
    if(pasword!=PSWRD){
	/*Kullan�c� �ifresini yanl�� girerse a��l�r.*/
	printf("Hatali giris yaptiniz.\n");
	}
	else {
		printf("Lutfen yapacaginiz islemi seciniz: \n");
		printf("Para yatirmak icin 1\n");
		printf("Para cekmek icin 2\n");
		printf("Hesap bakiyenizi gormek icin 3 giriniz.\n");
	}
	
	int number;		/*Kullanicinin sectigi numara*/
	scanf("%d", &number);
	
	if (number==1){
		/*Bu k�s�m kullan�c� 1'e basarsa a��l�r.*/
		double miktar = 0;
		printf("Lutfen miktari giriniz >\n");
		scanf("%lf", &miktar);	/*Kullan�c� hesab�na yat�rmak
								 *istedi�i miktar� girer.*/
		
			if(miktar>0){
				double bakiye = 0;	/* Ba�lang��taki bakiye
									 * de�i�tirilemeyece�i i�in
									 * yeniden bir bakiye tan�mland�.*/
				bakiye = 100.0 + miktar;
				printf("Hesabinizda %lf lira bulunmaktadir.\n",bakiye);
			}
			else{
				/*Kullan�c�n�n yat�rmak istedi�i para miktar� negatif
				 *bir de�er ise bu k�s�m a��l�r.*/
				printf("Hatali giris yaptiniz.\n");
			}
	}
	else if (number==2){
		/*Bu k�s�m kullan�c� 2'ye basarsa a��l�r.*/
		double miktar = 0;	/*Kullan�c� hesab�ndan �ekmek
							 *istedi�i miktar� girer.*/
		printf("Lutfen miktari giriniz >\n");
		scanf("%lf", &miktar);
		
		if(miktar>0 &&  miktar<INIT_BALANCE){
			double bakiye = 0;	/* Ba�lang��taki bakiye
								 * de�i�tirilemeyece�i i�in
								 * yeniden bir bakiye tan�mland�.*/
			bakiye = 100.0 - miktar;
			printf("Hesabinizda %lf lira bulunmaktadir.\n",bakiye);
		}
		else {
			/*Kullan�c�n�n girdi�i miktar, hesab�nda bulunan paradan
			 *fazla ise veya negatif bir de�er ise bu k�s�m a��l�r.*/
			printf("Hatali giris yaptiniz.\n");
		}
	}
	else if(number==3){;
		/*Bu k�s�m kullan�c� 3'e basarsa a��l�r.*/
		printf("Hesabinizda %d lira bulunmaktadir.\n" , INIT_BALANCE);
		/*Ekrana kullan�c�n�n hesab�nda bulunan para miktar�n� g�sterir.*/
	}
	else 
		/*Bu k�s�m kullan�c� 1,2 veya 3'ten 
		 *ba�ka bir �eye basarsa a��l�r.*/
		printf("Hatali giris yaptiniz.\n");
		
	return 0;
}
