#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/* defining our factorial function 
 * this will help us in computing the outcome for the provided formula.*/
int factorial(int n) {
  int i;
  int fact = 1;
  // checking to make sure that n is not set to be 1
  if (n==0)
    return 1;
  //factorial computation
  for (i = 1; i <= n; i++)
    fact = fact * i;
  return fact;

}

/* defining our compute polynomial function */
double compute_polynomial(int n, int x) {
  double sum = 0.0;
  int i;
  // this for loop allows us to produce the formula provided to us
  for(i = 0; i<=n; i++)
    sum = sum + (double)pow(x,i) / factorial(i);
  return sum;
}

/* putting our functions to work in the main block of code below. */
int main() {

  int order_of_polynomial;
  int size_of_array;
  double* array_of_terms;
  int i, x=1;
  // Here we can input the order of the polynomial we require
  printf("Enter the order of polynomial: ");
  scanf("%d", &order_of_polynomial);
  // calculating the size of our array
  size_of_array = order_of_polynomial + 1;
  // using malloc to initialize our array of terms pointer
  array_of_terms = (double *) malloc(size_of_array * sizeof(double));
  // iterating through the execution of our computation
  for(i=0; i < size_of_array; i++) {
      array_of_terms[i] = compute_polynomial(i,x);
      printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
  }
  // print the value of e1
  printf("e1 = %0.20f\n", exp(1));
  // Here we can showcase the comparison of results in our true value - estimate
  for(i = 0; i < size_of_array; i++)
      printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_terms[i]);
  // freeing up space at the end of the task
  free(array_of_terms);
  array_of_terms = NULL;

  return 0;
}





