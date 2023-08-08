#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of specific char
 * @size: The size of the array to create.
 * @c: The character to fill the array with.
 *
 * Returns:
 *   The created array, or NULL if the array could not be created.
 */
char *create_array(unsigned int size, char c) {
  char *array = NULL;

  if (size == 0) {
    return NULL;
  }

  array = malloc(sizeof(char) * size);

  if (array == NULL) {
    return NULL;
  }

  for (unsigned int i = 0; i < size; i++) {
    array[i] = c;
  }

  return array;
}
