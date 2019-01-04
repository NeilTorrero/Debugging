#include "utils.h"
#include <stdlib.h>
#include <memory.h>


char* resize(char * pointer, int size) {
	return (char *) realloc (pointer, sizeof(char) * size);
}