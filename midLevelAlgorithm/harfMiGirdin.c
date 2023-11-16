#include <stdio.h>
//girilen karakterin harf olup olmadığını hesaplayan C programı
int main(){
	
	char karakter;
	printf("karakter:"); scanf("%c",&karakter);
	
	if((karakter >= 'a' && karakter<= 'z') || (karakter >= 'A' && karakter <= 'Z')){
		printf("%c harfini girdin",karakter);
	}
	else printf("%c harf DEGILDIR !!!",karakter);

}
