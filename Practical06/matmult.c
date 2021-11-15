#include<stdio.h>

int main(){

  //Declare variables (dimensions)//
  // and matrices as static arrays (double prescision)// 
  int n=5, p=3, q=4;
  double A[n][p], B[p][q], C[n][q];
  
  //allocate loop indices//  
  int i, j, k; 

  //Initialize A, B, C matricies//
  //2D arrays so need two loops to initialise//  
  
   for (i=0; i<n; i++){
    for (j=0; j<p; j++){
      A[i][j]=i+j;

  }
}
  for (i=0; i<p; i++){
    for (j=0; j<q; j++){
      B[i][j]=i-j;

    }
  }
  for (i=0; i<n; i++){
    for (j=0; j<q; j++){
      C[i][j]=0.0;

    }
  }

  //Perform matrix multiplication//
  for (i=0; i<n; i++)
    for (j=0; j<q; j++)
      for(k=0; k<p; k++)
	C[i][j]=C[i][j]+A[i][k]*B[k][j];

  //Print out matrices//
  printf("\nThe matrix A:\n\n");
  for (i=0; i<n; i++){
    for (j=0; j<p; j++){
      printf("%3.0f", A[i][j]);
    }
    printf("\n");
  }
  printf("\nThe matrix B:\n\n");
  for (i=0; i<p; i++){
    for (j=0; j<q; j++){
      printf("%3.0f", B[i][j]);
    }
    printf("\n");
  }
  printf("\nThe matrix C:\n\n");
  for (i=0; i<n; i++){
    for (j=0; j<q; j++){
      printf("%3.0f", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
