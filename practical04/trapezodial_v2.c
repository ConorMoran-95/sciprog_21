#include<stdio.h>
#include<math.h>

/* function declaration - turns degrees to radians */
float degtorad(float degang);

int main(){
/* Declaring the variables required within our main body */
  int N=12, i;
  float TanArr[N+1], deg, rad;
  //Calculate the values of f(xi) where i=0, 1, ..., 12
  //as array elements (xi in radians)
  for(i=0; i<=N; i++){
    deg=i*5.0; //multiplying our iteration value by 5
    rad=degtorad(deg); // calling our function
    TanArr[i]=tan(rad); // applying resulting values to the tan function and assigning to an array 
    printf("TanArr[%d]=%f (f(x) at x=%d\n", i, TanArr[i], i); // showcasing the results
  }

  //Finding the area by trapezodial rule
  float area;
  area=TanArr[0]+TanArr[N];
  for(i=1; i<N; i++){ // for loop required to work through iterative process for finding the area
    area=area+2.0*TanArr[i];  
  }

  //Multiply area by (pi/3)/2N after converting it to radians
  float mult_rad=degtorad((60.0-0.0)/(2.0*N));
  area=mult_rad*area;

  //Approximated result
  printf("\nTrapezodial result:%f\n", area);
  //Actual result (ln(2))
  printf("Real Result: %f\n", log(2.0));

return 0;
}
/* Defining our function of interest */
float degtorad(float degang){
  return((M_PI*degang)/180.0);
}
