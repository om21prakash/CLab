#include <stdio.h>
main() {
   int LA[] = {1,3,5,7,8};
   int k = 3, n = 5;
   int i, j;
   printf("The original array elements are :\n");
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
   j = k;
   while( j < n){
      printf("Value of j is %d , k is %d and n is %d \n", j, k, n);
      LA[j-1] = LA[j];
      printf("Value of LA[%d] = %d and LA[%d] = %d \n", j-1, LA[j-1], j, LA[j]);
      j = j + 1;
   }
   n = n -1;
   printf("The array elements after deletion :\n");
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}
