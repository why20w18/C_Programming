#include <stdio.h>

int main( void ){
	
	int sayi , harshad , basamak ,sonuc = 0;
	
	printf("sayi girin:");
	scanf("%d",&sayi);
	
	harshad = sayi;
	
	while(sayi > 0){
		basamak = basamak + sayi % 10;
		sayi /= 10;
	}
	
	if(harshad % basamak == 0){
		printf("harshad sayisidir !");
	}
	else
	printf("harshad degildir !");
	
	return 0;
	
}
