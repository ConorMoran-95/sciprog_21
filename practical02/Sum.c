#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
/* adding the value of 1 over i to the sum2 variable in each iteration */
      sum1 += 1.0/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
/* adding the value of 1 over i to the sum2 variable in each iteration */
      sum2 = sum2+ 1.0/i;
   }
/* Printing out our two sum results */
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Subtracting sum1 from sum2 to find the difference */
   diff = sum2-sum1;
/* Showcasing the difference */
   printf(" Difference between the two is %f\n",diff);

}
