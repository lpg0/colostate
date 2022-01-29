#include <stdio.h>
#include <stdlib.h>
#include "Executor.h"

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
      int i, n;
      n = 5;
      srand((unsigned) atoi(argv[1]));
      for(i = 0; i < n; i++) {
         printf("%d\n", rand() % 50);
      }
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
