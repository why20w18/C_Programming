#include<stdio.h>
#include<locale.h>
//karakter ünlü mü yoksa ünsüz mü tespit eden C programı
int main(){

	char karakter;
	setlocale(LC_ALL , "Turkish");

	printf("harf girin:"); scanf("%c",&karakter);
	
	if(karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') printf("girilen karakter ünlü harftir !");
	else if(karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == 'O' || karakter == 'U') printf("girilen karakter ünlü harftir !");
	else printf("girilen karakter ünsüz harftir");	
	
}
