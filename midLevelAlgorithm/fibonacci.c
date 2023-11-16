#include <stdio.h>
//fibonacci dizisini olusturan C programı
int main(){
	
	int i,s1 = 0,s2 = 1,next,n;
	printf("kacinci terime kadar:"); scanf("%d",&n);
	
	printf("%d %d ",s1,s2);
	for(i = 0 ; i < n-2 ; i++){
		next = s1+s2;
		printf("%d ",next);
		s1 = s2;
		s2 = next;
		
	}
		
}
