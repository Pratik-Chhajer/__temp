#include <stdio.h>

void fun(int n){
	if(n<=0)
		return;
	fun(n-1);
	printf("n : %d\n",n);
	return;
}

int main(){

	fun(5);	


	return 0;
}