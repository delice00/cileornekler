//KLAVYEDEN GIRILEN IKI SAYININ DURUMUNU EKRANA BASTIRAN KOD
//Kodları buradan kopyalayip kendi editorunuze yapistirip calistirabilirsiniz

#include<stdio.h>

int main(void)
{
	int sayi1,sayi2;//2 adet int tipi belirledik
	printf("Klavyeden Girilen 2  adet sayinin esitlik, buyukluk, kucukluk durumu\n");
	printf("2 adet Sayi giriniz(Sayilar arasi bosluk birakip Enter'a basiniz):  ");
	
	scanf("%d%d",&sayi1, &sayi2);//klavyeden girilen 2 adet sayının okunmasını sagladı
	
	if(sayi1==sayi2){
		printf("%d = %d (Girilen sayilar esittir) \n",sayi1,sayi2);
	}
	if( sayi1!=sayi2){
		printf("%d != %d (Girilen sayilar esit degildir)\n",sayi1,sayi2);
	}
	if(sayi1<sayi2)
	{
		printf("%d < %d (Ikinci girilen sayi ilk sayidan buyuktur )\n",sayi1,sayi2);
	}
	if(sayi1>sayi2){
		printf("%d > %d (ilk girilen sayi ikinci sayidan buyuktur)\n",sayi1,sayi2);
	}
	if(sayi1<=sayi2){
		printf("%d <= %d (Ilk girilen sayi ikinci sayidan kucuk veya esittir)\n",sayi1,sayi2);
	}
	if(sayi1>=sayi2){
		printf("%d >= %d (Ilk girilen sayi ikinci sayidan buyuk veya esittir)\n",sayi1,sayi2);
	}
	
	return 0;
}

