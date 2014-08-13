//Demonstrates the usage of DEFINE, CONST keywords

#include <stdio.h>
#include <limits.h>
#include <float.h>
#define length 50
#define breadth 50
int main()
{
const char NEWLINE = '\n';
const char delim = '=';
const char tab = '\t';
  printf("Program to print area of rectangle");
  printf("%c", NEWLINE);
  printf("%c %c %c %c %c %c %c %c %c %c", delim, tab,delim, tab,delim, tab,delim, tab,delim, tab);
  printf("%c", NEWLINE);
  printf("Area is %d", length*breadth);
return 0;
}
