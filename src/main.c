/*
 Main CLI for PiDB
 */
#include <stdio.h>
#include <piMath.h>

int main() {
	printf("Doing the thing\n");

	puts("Pi:");
	printf("%d.", piDigit(0));
	for(int i = 1; i < 50; i++){
		printf("%d", piDigit(i));
	}
	puts("");
	puts("Done.");
//	printf("Hello World %d.%d%d%d%d%d\n", piDigit(0), piDigit(1), piDigit(2), piDigit(3), piDigit(4), piDigit(5));
	return 0;
}
