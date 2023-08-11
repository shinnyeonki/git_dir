#include <stdio.h>
#include "library.h"

int main(){
	int a = 10;
	int b = 5;

	printf("a + b = %d\n", add(a, b));
	printf("a - b = %d\n", sub(a, b));
	printf("a * b = %d\n", mul(a, b));
	print_hello();
	return 0;
}
