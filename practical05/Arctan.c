#include <stdio.h>
#include <math.h>

// Declaring our functions
double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main() {
  // prec variable inputted for precision in the below Maclaurin series
  double prec;
  printf("Enter precision for the Maclaurin series:\n");
  scanf("%lf", &prec);
  // begin and end variables also must be inputted for series to be computed
  double begin,end;
  printf("Enter the start and finish points for x:\n");
  scanf("%lf, %'lf", &begin, &end);
  // calculating our a value and assigning to asize 
  double a = ((fabs(begin) + fabs(end))/prec) + 1.;
  int asize = a;

  double tan1[asize];
  double tan2[asize];

  double i;
  int j = 0;
  // setting up a for loop to run from begin to end in prec increments
  for (i = begin; i <= end; i+=prec) {
     // populating our tan arrays
     tan1[j] = arctanh1(i, prec);
     tan2[j] = arctanh2(i);
     // showcasing our results
     printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf.\n", i, i, fabs(tan1[j] - tan2[j]));
     // incrementing j to finish out the loop
     j++;
}
  // return 0 would indicate a successful run if logs were employed
  return 0;
}

// defining our first arctan function
double arctanh1(const double x, const double delta) { 
  double arcTan = 0;
  double elem;
  int n = 0;
  // setting up a do...while loop
  // The body of a do...while loop is executed at least once
  do {
    // this will operate as an approximation to the Maclaurin series
    double val = 2*n + 1;
    elem = pow(x, val)/val;
    arcTan += elem;
    n++;
    
  } while(fabs(elem) >= delta); // the function will stop when the element in the series is smaller than delta
  return arcTan;
}

// defining our second arctan function
double arctanh2(const double x) {
  // this will provide approximations to natural logarithms
  return (log(1 + x) - log(1 - x))/2;
}
