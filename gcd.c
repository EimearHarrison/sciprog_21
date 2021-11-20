
#include <stdio.h>

//Declare Functions
int iterativeGCD(int a, int b);

int main(void) {
   int a, b, error;

   printf("Please input two positive integers\n");
   error = scanf("%d %d",&a,&b);
   if (error != 2) {
     printf("Please try again\n");
     return 1;
   }

   if (a<=0 || b<=0) {
     printf("These numbers are not positive!\n");
     return 1;
   }
   
  //Call Functions
   printf("Iterative gcd(%d, %d)=%d\n", a, b, iterativeGCD(a,b));
  
  return 0;
}
  //Define Functions
   int iterativeGCD(int a, int b){
     int temp;
     while(b != 0){
       temp=b;
       b=a%b;
       a=temp;
     }
     return a;

  }


