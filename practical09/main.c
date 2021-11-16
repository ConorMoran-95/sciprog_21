#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
// magic_square.h is enlcosed in "" as the file is located in our working directory
int main() {

  int n;
  printf("Enter the square side:\n");
  scanf("%d", &n); //inputting the size of our square matrix

  //Allocate a matrix
  int i;
  int ** magicSquare = malloc(n * sizeof(int));
  
  // allocating the desired memory for our magicSquare matrix
  for(i = 0; i < n; i++) {
    magicSquare[i] = malloc(n * sizeof(int));
  } 
  
  int j;
  // inputting the numbers which we will accept for each of our rows in the square matrix
  for(i = 0; i < n; i++) {
    printf("Enter the elements in row #%d, separated by blanks and/or linebreaks:\n", i+1);
    for(j = 0; j < n; j++) {
      scanf("%d", &magicSquare[i][j]);
    }
    
  }
  
  // Using print to showcase the result of our work
  // ?: is used as a conditional expression in this case
  printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is NOT");
  // deallocating the memory previously allocated by malloc() 
  for(i = 0; i < n; i++) {
    free(magicSquare[i]);
  }
  free(magicSquare);

  return 0;
}
