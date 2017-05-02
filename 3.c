#include <stdio.h>

int main(){

	int a = 1;

	if(a++ || a++){
		printf("a : %d\n",a);
	}

	int b = 1;
	if(b++ | b++){
		printf("b : %d\n",b);
	}	


	return 0;
}