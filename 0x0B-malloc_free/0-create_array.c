#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 * @array_size: int tells the size of desired array
 * @fill_char: the char to fill the array with
 * @return: NULL if array_size equal 0 or if it fails or returns pointer to array
 */

char* _create_array(unsigned int array_size, char fill_char) {
  if (array_size == 0) {
    return NULL;
  }

  char *array = (char *) malloc(sizeof(char) * array_size);

  if (array == NULL) {
    return NULL;
  } else {
    for (unsigned int i = 0; i < array_size; i++) {
      array[i] = fill_char;
    }
  }

  return array;
}
