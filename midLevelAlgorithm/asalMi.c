#include <stdio.h>
//asal sayi tespiti yapan C programı
int main(){
	
	int sayi;
	printf("sayi:"); scanf("%d",&sayi);
	
	
	int i = 0;
	for(i = 2 ; i < sayi ; i++){
		if(sayi % i == 0){
			printf("asal degildir");
			return; //program direkt sonlanacak eğer bu bloğa girerse
		}
	}
	printf("sayi asaldir !"); //if bloğuna girmezse asaldir diyecek
	
}
