#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // Step 1 and 2: Initiliaze 10 int array and set first value to 0
  int ray[10];
  ray[0] = 0;

  // Step 3: Populate the rest of the array with random values
  srand( time(NULL) );
  int inc = 1;
  int random = 0;
  for (inc; inc < 10; inc++) {
    random = rand();
    ray[inc] = random;
  }

  // Step 4: Print the array values
  printf("Array 1 values:\n");
  for (inc = 0; inc < 10; inc++)
    printf("%d\n",ray[inc]);

  // Step 5: Create a separate array large enough to store 10 points
  int ray2[10];

  // Step 6: Create pointer variables that point to each array
  int *rayp = ray;
  int *ray2p = ray2;

  // Step 7: Populate 2nd array w/ 1st array values in reverse order
  for (inc = 0; inc < 10; inc++) {
    ray2p[inc] = *(rayp + 9 - inc);
  }

  printf("\nArray 2 values:\n");
  for (inc = 0; inc < 10; inc++)
    printf("%d\n",ray2[inc]);


  return 0;



}
