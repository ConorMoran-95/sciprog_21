#include <stdio.h>

int main(void) { 
  // variable declaration
  int i;
  double a;
  printf("Enter an int and a double, separately by (,)\n");
  // below line is required to input our desired values
  scanf("%d, %lf", &i, &a);
  // presenting our choices
  printf("You have entered %d, and %lf\n", i, a);
  // defining our pointer
  int *pointer_to_i = &i;
  // printing the final results of all this
  printf("The value i is %d\n", i);
  printf("The value i is also %d\n", *pointer_to_i);
  printf("The address of i is %d\n", &i);
  return 0;
}
