#include <stdio.h>

int main(void) {
	//generovani kraliku:
	int minuly = 0, predminuly = 1, fibo;
	for (int i = 0; i < 10; i++) {
		fibo = minuly + predminuly;
		//printf("i: %d, predchozi: %d, predpredchozi: %d\n", i, minuly, predminuly);
		printf("fibo(%d) = %d\n", i, fibo);
		predminuly = minuly;
		minuly = fibo;
	}
}