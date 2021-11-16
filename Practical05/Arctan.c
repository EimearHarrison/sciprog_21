#include <stdio.h>
#include<math.h>

//Use const double to ensure value cannot change throughout//
double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(void){

  //User input precision and range//
  double prec;
  printf("Enter precision for the Maclaurin series:\n");
  scanf("%lf", &prec);

  double begin,end;
  printf("Enter the start and finish points for x:\n");
  scanf("%lf, %'lf", &begin, &end);
  

  //Create variable a which will define the size of the arrays in which tan values will be stored during the loop//
  double a = ((fabs(begin) + fabs(end))/prec) + 1.;
  int asize = a;

  double tan1[asize];
  double tan2[asize];

  double i;
  int j = 0;
  for (i = begin; i<= end; i+=prec){

    tan1[j] = arctanh1(i, prec);
    tan2[j] = arctanh2(i);
    //Tan2 more precise because Tan1 is just estimation//
    printf("The difference between tan1[%.3lf] and tan2[%.3lf] is %.10lf. \n", i, i, fabs(tan1[j] - tan2[j]));
	   j++;
  }

  return 0;
}

double arctanh1( const double x, const double delta){
  double arcTan = 0;
  double elem;
  int n = 0;
  //While the absolute value of the element is greater than or equal to the precision we set, do the calculation// 
  do {
    double val = 2*n + 1;
    elem = pow(x, val)/val;
    arcTan += elem;
    n++;

  } while(fabs(elem) >= delta);
	  return arcTan;

}
//Declare function//
  double arctanh2(const double x) {
    return (log(1 + x) - log(1 - x))/2;
      }
