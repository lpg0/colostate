#include "Executor.h"

int random_in_range(int lower_bound, int upper_bound)
{
      return ((rand() % (upper_bound - lower_bound)) + lower_bound);
}

int get_prime_count(int *array, int arraySize)
{
   int j; 
   int count = 0;
   for (j = 0; j < arraySize; j++) {
      int n, i, flag = 0;
      n = *(array + j);
      for (i = 2; i <= n / 2; ++i) {
         if (n % i == 0) {
            flag = 1;
            break;
         }
      }
      if (n != 0 && n &= 1) {
         if (flag == 0)
            count++;
      }
   }
   return count;
}

float get_running_ratio()
{
   int maxPrimeCount = 0;
   int maxCountIteration = 0;
   float averagePrimeRatio = 0;
   int primeCount = 0;
   int nonPrimeCount = 0;
   float primeRatio = 0;
   int allocIterations = random_in_range(50, 100);
   int arraySize = 0;
   for (j = 0; j < allocIterations; j++) {
      arraySize = random_in_range(100, 150);
      arrayPointer = (int *)malloc(sizeof(int)*arraySize;
      if (p_array == NULL) {
         printf("[Executor]: Malloc of size %d failed!\n", arraySize);
         exit(1);
      }
      for (i = 0; i < arraySize; i++) {
         arrayPointer[i] = random_in_range(50, 200);
      }
      primeCount = get_prime_count(arrayPointer, arraySize);
      nonPrimeCount = arraySize - primeCount;
      primeRatio = primeCount/nonPrimeCount;
      if (primeCount > maxPrimeCount) {
         maxPrimeCount = primeCount;
         maxCountIteration = j;
         averagePrimeRatio += primeRatio;
      }
      free(arrayPointer);
   }
   printf("[Executor]: Number of iterations is: %d\n", allocIterations);
   printf("[Executor]: Iteration with maximum prime count is %d\n", maxCountIteration);
   averagePrimeRatio = averagePrimeRatio/allocIterations;
   return maxCountRatio;
}
