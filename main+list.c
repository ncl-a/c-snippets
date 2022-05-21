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

	root = ListCreateEmpty();
	root = ListInsertBack(root, v + 0);
	root = ListInsertBack(root, v + 1);
	root = ListInsertBack(root, v + 2);
	root = ListInsertBack(root, v + 3);


	return 0;
}