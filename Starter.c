#include <stdio.h>
#include <stdlib.h>
#include "Executor.h"

int main( int argc, char *argv[] )  {

   if( argc == 2 ) {
      int i, n;
      n = 5;
      srand((unsigned) atoi(argv[1]));
      printf("[Starter]: With seed: %d\n", atoi(argv[1]));
      printf("[Starter]: Running ratio: %d\n", get_running_ratio());
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
