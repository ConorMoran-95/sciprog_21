#include <stdio.h>
#include <stdlib.h>

//PROBLEM
//
// Rod 1 = A
// Rod 2 = B
// Rod 3 = C
//
// n disks = 2
//
// Disk 1 from A to B
// Disk 2 from A to C
// Disk 3 from B to C
//
// - Shift 'n-1' disks from Source (A) to Middle (B)
// - Shift one disk from Source (A) to Destination (C)
// - Shift 'n-1' disks from Middle (B) to Destination (C)

// defining our hanoi function which will be used recursively and has a void return type
void hanoi(int n, int source, int dest, int midd) {
  // special condition for when n is equal to 1
  if (n == 1) {
    printf("Moved disk %d from %d to %d\n", n, source, dest);
  }
  // in all other cases, we employ this recursive hanoi function for n minus 1 
  // all the while we print the result of our source to destination movements
  else{
    hanoi(n-1, source, midd, dest);
    printf("Moved disk %d from %d to %d\n", n, source, dest);
    hanoi(n-1, midd, dest, source);
  }
}

// defining our main body function where we will set up the use of the hanoi function
void main() {
  int h;
  printf("Enter the number of disks: \n");
  scanf("%d", &h); // enter the number of disks
  printf("Tower of Hanoi solution for %d disks:\n", h);
  hanoi(h, 1, 3, 2); // specifying our source, destination and middle parameters as desired
}
