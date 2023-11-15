#include<stdio.h>
//kullanici tarafindan girilen 2 tam sayinin bolumu ve kalanini bulan C programı
int main( void ){
	
	int a,b,temp;
	
	printf("iki sayi girin\n");
	scanf("%d %d",&a,&b);
	
	temp = a / b;
	printf("bolum: %d\n",temp);
	temp = a % b;
	printf("kalan: %d",temp);
}
