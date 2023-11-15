#include<stdio.h>
//kullanıcı tarafından girilen iki sayiyi degistiren C programı
int main(){
	int a , b , temp;
	
	printf("a:"); scanf("%d",&a);
	printf("b:"); scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	printf("---degistikten sonra---\n");
	printf("a: %d\nb: %d",a,b);
}
