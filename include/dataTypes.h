//
// Created by gstewart on 1/7/21.
//

#ifndef TEST_OUT_DATATYPES_H
#define TEST_OUT_DATATYPES_H

enum irrational{pi};

// cache entries for keeping track of previously calculated numbers
struct irratCachEntry{
	enum irrational number;
	char* data;
};
//a compressed block of data
struct compressedBlock{
	unsigned long int startIndex;
};// address of starting block

// data blocks, block size, irrational
struct compressedData{
	enum irrational number;
	unsigned long int blockSize;
	struct compressedBlock* blocks;
};


#endif //TEST_OUT_DATATYPES_H
