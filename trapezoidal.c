#include<stdio.h>
#include<math.h>

int main (){
  // function given for curve, want to calculate area divided into n equal intervals, working with 11 inner points //
  // Variable N assigned 12 and declared loop index i //
  int N=12, i;
  float a=0.0, b_deg=60.0;

  //Convert pi/3 to radians, pi is predefined constant in math library //
  float b_rad;
  b_rad=(M_PI * b_deg)/180.0;
  printf("pi/3 in Radians=%f\n", b_rad);
 
  //f(x0)+f(xN)
  float area=tan(a)+tan(b_rad);  
  printf("initial sum=%f\n", area);

  //2*f(x1)+2f(x2)+....+ 2*f(xN-1), with i converted to radians //
   for (i=5; i<60; i=i+5){
    area=area+2*tan((M_PI*i)/180.0);
    printf("New area at x%d =%f\n", i/5, area);
      }

  //Multiply with b-a/2N
  float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
  area=mult_rad*area;

  //Approxmated value
  printf("\nTrapezoidal result=%f\n", area);
  //Actual result for comparison
  printf("Real result=%f\n", log(2.0));


  return 0;
}
