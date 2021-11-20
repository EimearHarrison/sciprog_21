#include <stdio.h>
#include <stdlib.h>

//Header file//
#include "magic_square.h"

int main(){

  //User input of size of square//
  int n;
  printf("Enter the square size:\n");
  scanf("%d", &n);

  //Allocate a matrix
  //Array of pointers where each pointer is a row//
  int i;
  int ** magicSquare = malloc(n * sizeof(int));

  for(i = 0; i < n; i++){
    magicSquare[i] = malloc(n * sizeof(int));
  }

  //User input of integer data for matrix//
 int j;
  for(i = 0; i < n; i++){
   printf("Enter the elements in row #%d, seperated by blanks and/or linebreaks:\n", i+1);
   for(j = 0; j < n; j++){
     scanf("%d", &magicSquare[i][j]);
   }

  }
  //Determine wheter or not square is magic//
  //Implementation of isMagicSquare function//
  printf("The square %s magic. \n", isMagicSquare(magicSquare, n) ? "is" : "is Not");
  
  //Free each row seperately before freeing array pointers//
  for(i = 0; i < n; i++){
    free(magicSquare[i]);
  }
  //Free Array Pointers//
  free(magicSquare);

  return 0;
}
