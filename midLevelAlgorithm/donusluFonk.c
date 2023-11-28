#include<stdio.h>

int retTest(int a){
	return 2*a;
}

int main( void ){
	
	int ax;
	printf("2 kati alinacak sayi:");
	scanf("%d",&ax);
	printf("\n%d",retTest(ax));	
}
