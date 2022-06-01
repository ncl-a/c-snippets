#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "elemtype.h"
#include "minheap.h"

int main(void) {	// CANCELLAMI !!!!!!!!!!!!!!!!!!!!!!
	
	//				   1, 2, 3, 4, 5, 6	
	ElemType els[] = { 1, 3, 5, 4, 8, 6 };
	Heap* h = HeapCreateEmpty();

	HeapMinInsertNode(h, els + 0);
	HeapMinInsertNode(h, els + 1);
	HeapMinInsertNode(h, els + 2);
	HeapMinInsertNode(h, els + 3);
	HeapMinInsertNode(h, els + 4);
	HeapMinInsertNode(h, els + 5);

	//					1
	//			3				5
	//		4		8		6
	//
	//



	return 0;
}
