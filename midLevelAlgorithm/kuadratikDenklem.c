#include <stdio.h>
#include <math.h>
//kuadratik denklemin köklerini bulan C programı
int main(){
	
	double a,b,c; //katsayilar
	printf("ax^2 + bx + c\na:"); scanf("%lf",&a);
	printf("b:"); 				 scanf("%lf",&b);
	printf("c:");				 scanf("%lf",&c);
	system("cls");
	printf("%.0lfx^2 + %.0lfx + %.0lf",a,b,c);
	
	double x1 , x2;
	
	x1 = (((-1 * b) + sqrt((b*b)-4*a*c)) / 2*a);
	x2 = (((-1 * b) - sqrt((b*b)-4*a*c)) / 2*a);
	
	printf("\nbirinci kok: %.2lf\n ikinci kok: %.2lf",x1,x2);
}
