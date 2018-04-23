#include<stdio.h>

int global = 100;          // global variable declared

void main()

{

   int local = 10;         // local variable declared

   printf("Global variable is %d\n",global);

   printf("Local variable is %d\n",local);

   func1();

}

void func1()

{

   printf("Global inside func1 is %d\n",global);  // Would print the global variable successfully.

}
