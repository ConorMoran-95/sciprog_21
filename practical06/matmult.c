#include<stdio.h>

int main(){

  int n=5, p=3, q=4;
  /* 2D array declaration */
  double A[n][p], B[p][q], C[n][q];
  int i, j, k;
  
  //Initialize A, B and C matrices
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      A[i][j]=i+j; // A_ij is equal to i+j
    }
  }
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
       B[i][j]=i-j; // B_ij is equal to i-j
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      C[i][j]=0.0; // C initialized to zero
    }
  }
  // Perform matrix multiplication
  for(i=0; i<n; i++)
    for(j=0; j<q; j++)
      for(k=0; k<p; k++)
        C[i][j]=C[i][j]+A[i][k]*B[k][j]; // Updating C in accordance with the schematic provided

  //Printing out the matrices via a double for-loop
  printf("\nThis is the matrix A:\n\n");
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      // value will be printed with three decimal places 
      printf("%3.0f", A[i][j]);
}
    printf("\n");
}

  printf("\nThis is the matrix B:\n\n");
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
      printf("%3.0f", B[i][j]);
}
    printf("\n");
}


  printf("\nThis is the matrix C:\n\n");
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      printf("%3.0f", C[i][j]);
}
    printf("\n");
}


  return 0;
}
