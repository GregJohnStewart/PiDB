//
// Created by gstewart on 1/7/21.
//

#ifndef DATATYPES_H
#define DATATYPES_H

#define numIrrationals 1

enum irrational{pi};
typedef enum irrational Irrational;

enum storageMedium{buffer,file};
typedef enum storageMedium StorageMedium;

// cache entries for keeping track of previously calculated numbers
struct irratCacheEntry{
	Irrational number;
	StorageMedium medium;
	unsigned long int dataSize;
	char* data;
};
typedef struct irratCacheEntry IrratCacheEntry;

//a compressed block of data
struct compressedBlock{
	unsigned long int startIndex;
};// address of starting block
typedef struct compressedBlock CompressedBlock;

// data blocks, block size, irrational
struct compressedData{
	// the irrational number used to compress the data
	Irrational number;
	// the size of the blocks used
	unsigned long int blockSize;
	// the number of blocks we ended up with
	unsigned long int numBlocks;
	// pointer to th array of blocks
	CompressedBlock* blocks;
};
typedef struct compressedData CompressedData;


#endif //DATATYPES_H
