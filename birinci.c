#include<stdio.h>
//cümleyi ekrana yazdıran C programı
int main( void ){
	
	char string[100];
	printf("kelime:");
	fgets(string , 100 , stdin); //scanf("[^\n]%d",string);
	printf("%s",string);
}
