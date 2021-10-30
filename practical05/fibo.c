#include <stdio.h>
#include <stdlib.h>

// void is used in this function declaration as no value is returned upon execution
void fibo(int *a, int *b);

int main() {
  // n will be our +ve integer input
  int n;
  printf("Enter a positive integer for n: \n"); 
  scanf("%d", &n);
  
  // if statement designed to exit if n selection is less than 1
  if (n < 1) {
     printf("Number less than 1\n");
     exit(1);
  }
  
  // assigning values to our two new n variables  
  int n1 = 0;
  int n2 = 1;
  // n1 and n2 will be the start of our fibonacci sequence
  printf("The fibonacci sequence is: \n");
  printf("%d, ", n1);  
  
  int i;
  // this for loop will use the fibo function to compute our desired sequence
  for (i = 1; i < n-1; i++) { 
      fibo(&n1, &n2);
      printf("%d, ", n1);
  }
  // ampersand notation can be used to pass address of objects to function
  fibo(&n1, &n2);
  printf("%d\n", n1);
  
  return 0;
}

// defining our fibonacci function where we make our computations
void fibo( int *a, int *b) {
    
  int next;
  // asterisk notation can be used to access value of variable from pointer
  next = *a + *b;
  *a = *b;
  *b = next;
}
