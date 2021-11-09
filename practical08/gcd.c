/*
 * Iterative and Recursive version of Euclid's Algorithm
 * to calculate the gcd of two positive integers
 *
 */
#include <stdio.h>

// Declare Functions
int iterativeGCD(int a, int b);

int recursiveGCD(int a, int b);

// The majority of this main body of code was taken from the non-assesed practical01
int main(void) {
   int a, b, error;
   //gathering our two integeres of interest
   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }
   // checking if a or b is less than zero
   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }

  // Call Functions
  printf("Iterative gcd(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
  printf("Recursive gcd(%d, %d)=%d\n", a, b, recursiveGCD(a,b));
  return 0;
}

// Define Functions
int iterativeGCD(int a, int b){
  int temp;
  // iterating through a while loop
  while(b != 0){
    temp=b;
    // using the modulus operator here looking for potential remainders
    b=a%b;
    a=temp;
  }
  return a;
}

int recursiveGCD(int a, int b){
  // running through the recursiveGCD function until a%b equals 0
  if (b==0){
    return a;
  }
  else{
    return(recursiveGCD(b,a%b));
  }
}
