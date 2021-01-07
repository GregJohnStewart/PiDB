//
// Created by gstewart on 1/7/21.
//

#include "byteFinder.h"
#include "dataTypes.h"

struct compressedData compress(enum irrational number, char data[]){

	struct compressedBlock blocks[5];

	struct compressedData output = {number, 1, blocks};

	return output;
}