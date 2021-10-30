#include<stdio.h>
// the comments for this almost identical code can be found in the matmult.c script
int main(){

  int n=5, p=3, q=4;
  double A[n][p], B[p][q], C[n][q];
  int i, j, k;
  
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      A[i][j]=i+j;  
    }
  }
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
       B[i][j]=i-j;
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      C[i][j]=0.0;
    }
  }
  // Perform matrix multiplication with the matmult function
  // This function can be found within mm.c 
  matmult(n,p,q,A,B,C);

  //Print out the matrices
  printf("\nThis is the matrix A:\n\n");
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
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
