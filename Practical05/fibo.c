#include <stdio.h>
#include <stdlib.h>

//Declare function exists and create function below//
void fibo(int *a, int*b);

int main(void) {

  //Declaring positive integer n you want user to input//   
  int n;
  printf("Enter a positive integer for n: \n");
  //Allow user to input value using scanf//
  scanf("%d", &n);

  //If number less than one quit programme//
  if (n < 1){
    printf("Number less than 1\n");
    exit(1);
  }

  //Declaring first numbers in sequence//
  int n1 = 0;
  int n2 = 1;
  printf("The Fibonacci sequence is: \n");
  printf("%d, ", n1);

  //Declare loop integer i, start loop for i=1 and call fibo function passing reference to n1 and n2 to give up to n-1 terms//
  int i;
  for (i = 1; i < n-1; i++){
    fibo(&n1, &n2);
    printf("%d, ", n1);
  }
  //print final number//
      fibo(&n1, &n2);
    printf("%d\n", n1);

  return 0;
}

  //Create fibo function//
  void fibo(int *a, int *b){
  int next;
  //pointer of a and pointer of b have same value as a and b//
  next = *a + *b;
  *a = *b;
  *b = next;
}

