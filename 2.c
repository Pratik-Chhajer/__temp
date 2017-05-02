#include <stdio.h>

int main(){

	int a = 1;
	int b = 0;
	if(a,b){
		printf("%s\n","YES");
	}
	else{
		printf("%s\n","NO");
	}

	if(b,a){
		printf("%s\n","YES");
	}
	else{
		printf("%s\n","NO");
	}	


	return 0;
}