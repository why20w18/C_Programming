#include<stdio.h>
//iki ondalıklı sayiyi çarpma işlemi yapan C programı
int main( void ){
	double x,y;
	printf("2 ondalikli sayi gir (ornek:4.5 x 6.1)\n");
	scanf("%lf %lf",&x,&y);
	printf("sonuc: %.2lf",(x*y));
	
}
