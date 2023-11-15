#include<stdio.h>
//int char float boyutlarini gormek icin C programi
int main( void ){
	
	//size_t boyut = sizeof(int);
	
	//bit < byte < word < kilobayt < megabayt < gigabayt < terabayt
	printf("char : %zu byte %f kb\n",sizeof(char),(float)sizeof(char)/1024);
	
	printf("int  : %zu byte %f kb\n",sizeof(int),(float)sizeof(int)/1024);
	//printf("int  : %zu byte %f kb\n",sizeof(int),(float)boyut/1024);
	
	printf("float: %zu byte %f kb\n",sizeof(float),(float)sizeof(float)/1024);
	
	//%zu genelde bellek boyutları ifade edilirken , %u unsigned değerler 
}
