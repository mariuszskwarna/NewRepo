#include <stdio.h>
#include "fun.c"

int main(int argc, char* argv[]){

	int i=0;
	printf("Polskie menu:1 / English menu:2 : ");
	scanf("%d",&i);
	
	if(i==1 || i==2) fun(i);
	else printf("Niepoprawna opcja / bad option\n");

return 0;
}
