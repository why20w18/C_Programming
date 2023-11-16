#include<stdio.h>
#include<locale.h>
//üç rakam arasındaki en büyük rakamı bulan C programı
int main(){
	int a,b,c;
	printf("3 sayi girin:");
	scanf("%d %d %d",&a,&b,&c);
	
	int max = (a < b) ? b : a;
	max = (a < c) ? c : a;
	max = (b < c) ? c : b;
	
	printf("%d sayisi en buyuk sayidir",max);
	
}
