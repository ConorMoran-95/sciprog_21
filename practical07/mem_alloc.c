#include <stdio.h>
#include <stdlib.h>

/* This function will return a pointer to an allocated memory block for the provided integer. */
int* allocatearray(int n) {
  int* array;
  /* malloc is used to allocate size bytes of uninitialized storage.
  * Returns a pointer that is suitably aligned for the object type. */
  array = (int*) malloc(n * sizeof(int)); 
  printf("Array of size %d allocated.\n", n);
  return array;
}

/* This function will take a pointer to an array of integers and then fill every cell in the array with a value of one. */
void fillwithones(int* array, int n) {
  int i;
  for(i = 0; i < n; i++)
    array[i] = 1;
}

/* This function will take a pointer to an array of integers and will then proceed to print its elements to the screen. */
void printarray(int *array, int n){
  int i;
  for(i = 0; i < n; i++) // iterating through the array we wish to print
    printf("%d ", array[i]);
    printf("\n");
}

/* This function will free the allocated memory.
 * Return type is void as no value is outputted. */
void freearray(int* array) {
  free(array); // applying the free function to our array
  printf("Array freed!\n");
}

/* All of the above functions will be called in the below main block */
int main() {
  /* Declaring our n variable and array_main pointer */  
  int n;
  int* array_main;

  printf("Enter the number of elements in the array: ");  scanf("%d", &n);
  /* calling all of our functions to carried out the desired tasks */
  array_main = allocatearray(n);
  fillwithones(array_main, n);
  printarray(array_main, n);
  freearray(array_main);
  /* assigning the variable name array_main to be null to complete the process of freeing up all the appropriate space */ 
  array_main = NULL;

  return 0;
}
