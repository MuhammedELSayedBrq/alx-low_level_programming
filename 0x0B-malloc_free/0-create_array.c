#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @size: int tells the size of desired array
 * @c: the char to fill the array with
 * @return: NULL if array_size equal 0 or if it fails or returns pointer to array
 */

char* _create_array(unsigned int size, char c) {
	char* result;
  if (size == 0) {
    return NULL;
  }

  result = (char *) malloc(sizeof(char) * size);

  if (result == NULL) {
    return NULL;
  } else {
	  unsigned int i;
	    for (i = 0; i < size; i++) {
		    result[i] = c;
    }
  }

  return result;
}
