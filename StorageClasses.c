//i is declared as static variable within function. j is a normal integer variable. 

#include <stdio.h>
/* function declaration */
void func(void);
static int count = 5; /* global variable */
main()
{
   while(count--)
   {
      func();
   }
   return 0;
}
/* function definition */
void func( void )
{
   static int i = 5; /* local static variable */
   int j =5;
   i++;
   j++;
   printf("i is %d and count is %d\n", i, count);
   printf("j is %d and count is %d\n", j, count);
}
