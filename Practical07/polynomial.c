#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 //Define function
 int factorial(int n){
  int i;
  int fact = 1;

  if (n==0)
    return 1;

  //Loop for iterative function
  for (i = 1; i <=n; i++)
    fact = fact*i;
  return fact;
}

 //Function that computes polynomials
  double compute_polynomial(int n, int x){
    double sum = 0.0;
    int i;

    for (i = 0; i<=n; i++)
      sum = sum + (double)pow(x,i)/factorial(i);
    return sum;
  }

int main(){

  int order_of_polynomial;
  int size_of_array;

  //Double pointer
  double* array_of_terms;
  int i, x=1;

  printf("Enter the order of polynomial: ");
  scanf("%d", &order_of_polynomial);

  //The size of array is one more than the order of polynomial due to 0th term
  size_of_array = order_of_polynomial + 1;

  //Allocate array using malloc which is size of array multiplied by
  //size of data type you want to fill array with
  array_of_terms = (double *) malloc(size_of_array * sizeof(double));

  for (i = 0; i < size_of_array; i++){
    array_of_terms[i] = compute_polynomial(i,x);
    printf("f[%d] = %0.20f\n", i, array_of_terms[i]);
  }
  //Print actual value of e
  printf("e1 = %0.20f\n", exp(1));

  //Print difference
  for (i = 0; i < size_of_array; i++)
    printf("Estimate difference for term %d is %0.20f\n", i, exp(1) - array_of_terms[i]);

  //Need to deallocate memory 
  free(array_of_terms);
  array_of_terms = NULL;




  return 0;
}
