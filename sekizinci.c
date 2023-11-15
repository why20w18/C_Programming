#include<stdio.h>
#include<string.h> //strlen için ekledik
//anahtar kelimenin uzunluğunu long ile gösteren C programı
int main(){
	char kelime[100];
	
	printf("kelime:");
	scanf("%s",kelime);
	
	long uzunluk = strlen(kelime);
	
	printf("kelimeniz: %s\n",kelime);
	printf("  uzunluk: %ld",uzunluk);
}
