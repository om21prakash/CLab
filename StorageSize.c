//Prints the storage limits for various data types along with the maximum & minimum limits

#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
	printf("Storage size for int : %d \n", sizeof(int));
	printf("Minimum int positive value: %d\n", INT_MIN );
	printf("Maximum int positive value: %d\n", INT_MAX );
	printf("Storage size for unsinged int : %d \n", sizeof(unsigned int));
	printf("Storage size for short : %d \n", sizeof(short));
	printf("Storage size for unsigned short : %d \n", sizeof(unsigned short));
	printf("Storage size for short int : %d \n", sizeof(short int));
	printf("Storage size for long : %d \n", sizeof(long));
	printf("Storage size for unsigned long : %d \n", sizeof(unsigned long));
	printf("Storage size for long int : %d \n", sizeof(long int));
	printf("Storage size for char : %d \n", sizeof(char));
	printf("Minimum int positive value: %d\n", CHAR_MIN );
	printf("Maximum int positive value: %d\n", CHAR_MAX );
	printf("Storage size for signed char : %d \n", sizeof(signed char));
	printf("Storage size for float : %d \n", sizeof(float));
	printf("Minimum float positive value: %E\n", FLT_MIN );
	printf("Maximum float positive value: %E\n", FLT_MAX );
	printf("Precision value: %d\n", FLT_DIG );
	printf("Storage size for double : %d \n", sizeof(double));
	printf("Minimum float positive value: %E\n", DBL_MIN );
	printf("Maximum float positive value: %E\n", DBL_MAX );
	printf("Storage size for long double : %d \n", sizeof(long double));
return 0;
}
