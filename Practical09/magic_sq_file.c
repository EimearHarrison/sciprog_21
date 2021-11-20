#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100

//Header file//
#include "magic_square.h"

//Will be going through elements of a file//
//Need function that will get the number of lines in file//

int getlines(char filename[MAX_FILE_NAME]);


int main() {

  FILE *f;
  char filename[MAX_FILE_NAME];
  printf("Enter file name: ");
  scanf("%s", filename);

  f = fopen(filename, "r");

  int n = getlines(filename);

  //Allocate a matrix
  //Array of pointers where each pointer is a row//
  int i;
  int ** magicSquare = malloc(n * sizeof(int*));

  for(i = 0; i < n; i++){
    magicSquare[i] = malloc(n * sizeof(int));
  }

  //file input of integer data for matrix//
 int j;

 for(i = 0; i < n; i++){

   for(j = 0; j < n; j++){
     fscanf(f,"%d", &magicSquare[i][j]);
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

  //Close file//
  fclose(f);

  return 0;
}


  int getlines(char filename[MAX_FILE_NAME]){
  
  //File variable declared as a pointer//
    FILE *fp;
    fp = fopen(filename, "r");
 
    int ch_read;
    int count = 0;

    //Get characters in a line in file//
    // while it is not end of file//
    while((ch_read = fgetc(fp)) != EOF) {

	//if new line increase count//
	if (ch_read == '\n'){
	  count++;
}     
    }

      printf("No. of lines %d\n", count);
      fclose(fp);
      return count;
  }
