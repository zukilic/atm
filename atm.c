/*
 * atm.c
 * Tek bir kullanicinin hesabini tutan bank atm programi
 * Zeynep Ülkü Kılıç
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
	
	int pasword=0; /* Kullanıcıdan alınacak
					* şifrenin bankanın şifresiyle
					* uyuşup uyuşmadığına bakmak için
					* tanımlanan bir değişken*/
    printf("Lutfen sifrenizi giriniz >\n");
    scanf("%d",&pasword);	/* Kullanıcının şifresini
							 * gireceği bölüm. */
    
    if(pasword!=PSWRD){
	/*Kullanıcı şifresini yanlış girerse açılır.*/
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
		/*Bu kısım kullanıcı 1'e basarsa açılır.*/
		double miktar = 0;
		printf("Lutfen miktari giriniz >\n");
		scanf("%lf", &miktar);	/*Kullanıcı hesabına yatırmak
								 *istediği miktarı girer.*/
		
			if(miktar>0){
				double bakiye = 0;	/* Başlangıçtaki bakiye
									 * değiştirilemeyeceği için
									 * yeniden bir bakiye tanımlandı.*/
				bakiye = 100.0 + miktar;
				printf("Hesabinizda %lf lira bulunmaktadir.\n",bakiye);
			}
			else{
				/*Kullanıcının yatırmak istediği para miktarı negatif
				 *bir değer ise bu kısım açılır.*/
				printf("Hatali giris yaptiniz.\n");
			}
	}
	else if (number==2){
		/*Bu kısım kullanıcı 2'ye basarsa açılır.*/
		double miktar = 0;	/*Kullanıcı hesabından çekmek
							 *istediği miktarı girer.*/
		printf("Lutfen miktari giriniz >\n");
		scanf("%lf", &miktar);
		
		if(miktar>0 &&  miktar<INIT_BALANCE){
			double bakiye = 0;	/* Başlangıçtaki bakiye
								 * değiştirilemeyeceği için
								 * yeniden bir bakiye tanımlandı.*/
			bakiye = 100.0 - miktar;
			printf("Hesabinizda %lf lira bulunmaktadir.\n",bakiye);
		}
		else {
			/*Kullanıcının girdiği miktar, hesabında bulunan paradan
			 *fazla ise veya negatif bir değer ise bu kısım açılır.*/
			printf("Hatali giris yaptiniz.\n");
		}
	}
	else if(number==3){;
		/*Bu kısım kullanıcı 3'e basarsa açılır.*/
		printf("Hesabinizda %d lira bulunmaktadir.\n" , INIT_BALANCE);
		/*Ekrana kullanıcının hesabında bulunan para miktarını gösterir.*/
	}
	else 
		/*Bu kısım kullanıcı 1,2 veya 3'ten 
		 *başka bir şeye basarsa açılır.*/
		printf("Hatali giris yaptiniz.\n");
		
	return 0;
}
