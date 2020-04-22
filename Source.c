#include <stdio.h>
#include <stdlib.h>

int sum=0;

int AddTwo(int a, int b, int *res) {
	int i = 5;
	*res = a + b + i;
	return *res;
}

void main(int argc, char *argv[]) {
	AddTwo(5, 6, &sum);
	printf("Result : %d", sum);
}