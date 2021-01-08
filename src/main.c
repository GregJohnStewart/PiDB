/*
 Main CLI for PiDB
 */
#include <stdio.h>
#include <piMath.h>

#include <dataTypes.h>
#include <byteFinder.h>

int main() {
	printf("Doing the thing\n");

	puts("Pi:");
	printf("%d.", piDigit(0));
	for(int i = 1; i < 500; i++){
		printf("%d", piDigit(i));
	}

	char dataToCompress[11] = "hello world";

	struct compressedData compressed = compress(pi, 8, 11, dataToCompress);


	puts("\nDone.");
	return 0;
}
