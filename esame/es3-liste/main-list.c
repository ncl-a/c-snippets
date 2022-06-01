#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "elemtype.h"
#include "list.h"

int main(void) {	// CANCELLAMI !!!!!!!!!!!!!!!!!!!!!!


	Item* root;
	ElemType v[] = { 12, 2, 37, 4 };
	const length = sizeof(v) / sizeof(ElemType);

	root = ListCreateEmpty();

	for (int i = 0; i < length; i++)
	{
		root = ListInsertBack(root, v + i);
	}


	return 0;
}