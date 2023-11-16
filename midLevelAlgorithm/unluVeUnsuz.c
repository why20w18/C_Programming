#include<stdio.h>
#include<locale.h>
//karakter ünlü mü yoksa ünsüz mü tespit eden C programı
int main(){
	
	setlocale(LC_ALL , "Turkish");
	char karakter;
	printf("karakter girin:"); scanf("%c",&karakter);
	
	if((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z')){
	
	switch(karakter){
		case 'a': case 'e': case 'i': case 'o': case 'u': 
		case 'A': case 'E': case 'I': case 'O': case 'U': 

			printf("karakter ünlü bir harftir !"); break;

		default: printf("karakter ünsüz bir harftir !");
	}
}
	else printf("karakter bir harf değildir !"); 
	
}
