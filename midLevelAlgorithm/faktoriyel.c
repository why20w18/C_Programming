#include <stdio.h>
//girilen sayinin faktoriyelini hesaplayan C programı
int main(){
	
	int i,sayi;
	
	printf("sayi:"); scanf("%d",&sayi);
	int sonuc = 1;
	for(i = 1 ; i <= sayi ; i++){
		sonuc = sonuc * i;
	}
	printf("\nsonuc: %d",sonuc);
	
}
