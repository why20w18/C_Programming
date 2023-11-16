#include<stdio.h>
//sayının çift mi tek mi olduğunu tespit eden C programı
int main(){
	int a = 0;
	
	printf("sayi girin:"); scanf("%d",&a);
	
	if(a % 2 == 0) printf("%d sayisi cifttir !",a);
	else printf("%d sayisi tektir !",a);
}
