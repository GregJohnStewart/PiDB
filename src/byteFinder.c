//
// Created by gstewart on 1/7/21.
//

#include <math.h>

#include "byteFinder.h"
#include "dataTypes.h"



struct irratCachEntry getIrrationalCache(enum irrational number){
	//TODO
}

struct compressedBlock compressBlock(struct irratCachEntry numCache, unsigned int blockSize, char block[]){
	//TODO
}

struct compressedData compress(enum irrational number, unsigned int blocksize, unsigned int dataSize, char data[]){
	struct irratCachEntry numCache = getIrrationalCache(number);
	const unsigned int numBlocks = ceil((double)dataSize / (double)blocksize);
	struct compressedBlock blocks[numBlocks];

	for(unsigned int i = 0; i < numBlocks; i++){
		char block[blocksize];
		for(int j = 0; j < blocksize; j++){
			block[j] = data[(i*blocksize) + j];//TODO:: check this math
		}

		blocks[i] = compressBlock(numCache, blocksize, block);
	}

	struct compressedData output = {number, blocksize, numBlocks, blocks};

	return output;
}