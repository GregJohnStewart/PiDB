//
// Created by gstewart on 1/7/21.
//

#include <math.h>

#include "byteFinder.h"
#include "dataTypes.h"
#include "piMath.h"

static const unsigned long int numDigitsToGenerate = 1000000;
static struct irratCacheEntry irrationalCache[numIrrationals] = {pi }; //MUST equal number of enums in irratCacheEntry

struct irratCacheEntry* getIrrationalCache(enum irrational number){
	struct irratCacheEntry* output;
	for(int i = 0; i < numIrrationals; i++ ){
		if(irrationalCache[i].number == number){
			output = &irrationalCache[i];
			break;
		}
	}

	if(output->data == 0){
		switch (output->number){
			case pi:
				output->data = piString(numDigitsToGenerate);
		}
	}
	return output;
}

struct compressedBlock compressBlock(struct irratCacheEntry* numCache, unsigned int blockSize, char block[]){
	//TODO
}

struct compressedData compress(enum irrational number, unsigned int blocksize, unsigned int dataSize, char data[]){
	struct irratCacheEntry* numCache = getIrrationalCache(number);
	const unsigned int numBlocks = ceil((double)dataSize / (double)blocksize);
	struct compressedBlock blocks[numBlocks];

	for(unsigned int i = 0; i < numBlocks; i++){
		char block[blocksize];
		for(int j = 0; j < blocksize; j++){
			block[j] = data[(i*blocksize) + j];
		}

		blocks[i] = compressBlock(numCache, blocksize, block);
	}

	struct compressedData output = {number, blocksize, numBlocks, blocks};

	return output;
}