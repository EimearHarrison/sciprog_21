#include <stdio.h>

int main(void) {

  int i;
  double a;
 printf("Enter an int and a double, seperately by(,)\n");

  //Passing by reference where scanf function reads in the integer or long float and we pass the reference to that value//
  scanf("%d, %lf", &i, &a);
  //This program will take two numbers entered by the user and convert the first to an integer and the secong to a double (long float)//
  printf("You have entered %d, and %lf\n", i, a);

  //Define pointer variable, integer value which holds a memory address which then points to a certain value //
  int *pointer_to_i = &i;
  printf("The value i is %d\n", i);
  printf("The value i is also %d\n", *pointer_to_i);
  printf("The address of i is %d\n", &i);

  return 0;
}
