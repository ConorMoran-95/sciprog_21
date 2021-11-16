#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"
// MAX_FILE_NAME can be thought of as:
// the longest file name string that the implementation guarantees can be opened


// declaring our getlines function
int getlines(char filename[MAX_FILE_NAME]);

int main() {
  // file handling with pointer f
  FILE *f;
  char filename[MAX_FILE_NAME]; // char variable for the file's appropriate name
  printf("Enter file name: ");  // Displaying our request for the name of the file desired
  scanf("%s", filename);  // taking the filename for which we wish to work with as input
  
  // Opens the file variable filename for reading 
  f = fopen(filename, "r");
  // initializing n to be the getlines function with our variable filename
  int n = getlines(filename);

  // Almost all of the rest of the code in this main function has been commented for in magic_sq_input.c
  
  int i;
  int ** magicSquare = malloc(n * sizeof(int*));

  for(i = 0; i < n; i++) {
    magicSquare[i] = malloc(n * sizeof(int));
  }
  
  int j;

  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      fscanf(f, "%d", &magicSquare[i][j]);
    }
    
  }
  
  printf("The square %s magic.\n", isMagicSquare(magicSquare, n) ? "is" : "is NOT");

  for(i = 0; i < n; i++) {
    free(magicSquare[i]);
  }
  // freeing up the prior allocation for magicSquare
  free(magicSquare);
  
  fclose(f); //closing the stream pointed to by f
  
  return 0;
}


// defining the getlines function
int getlines(char filename[MAX_FILE_NAME]) {
  // declaring our pointer fp and the file it opens for reading
  FILE *fp;
  fp = fopen(filename, "r");

  int ch_read;
  int count = 0;
  // fgetc() will get the next character from fp and advance the position indicator for the stream
  // this while loop will not terminate until the end of the file
  while( (ch_read = fgetc(fp)) != EOF)
  {
    // if and when ch_read encounters a new line, we will increment the count variable by one
    if (ch_read == '\n') {
      count++;
    }
  }
  // printing the count variable as the number of lines
  printf("No. of lines %d\n", count);
  // finally, we close the stream for fp and return the count
  fclose(fp);
  return count;  
}
