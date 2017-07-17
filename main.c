#include <stdio.h>
#include "fun.h"

int main(int argc, char* argv[]){

	int i=0;
	scanf("Polskie menu:1 / English menu:2 : ",&i);
	
	if(i==1 || i==2)
		menu(i);
	else printf("Niepoprawna opcja / bad option");

return 0
}
