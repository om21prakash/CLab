//Print various integer literals & value
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
int hexa=0x45E;
int octal=012;
int decimal=113423;
int uint= 30u;
int ulongint=45ul;
  printf("Value of Hexa decimal: %d \n", hexa);
  printf("Value of Octal: %d \n", octal);
  printf("Value of Decimal: %d \n", decimal);
  printf("Value of Unsigned integer: %d \n", uint);
  printf("Value of Unsigned Long Integer: %d \n", ulongint);
return 0;
}
