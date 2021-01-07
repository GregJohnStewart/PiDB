/*
 Main CLI for PiDB
 */
#include <stdio.h>
#include <piMath.h>

#include <dataTypes.h>
#include <byteFinder.h>

int main() {
	printf("Doing the thing\n");

	struct compressedData compressed = compress(pi, "some data");

	puts("Pi:");
	printf("%d.", piDigit(0));
	for(int i = 1; i < 500; i++){
		printf("%d", piDigit(i));
	}

	puts("\nDone.");
	return 0;
}
