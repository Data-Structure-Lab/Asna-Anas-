#include <stdio.h>

void myFunction(int a) {
  printf("\na in fun1 is%d",a);
  a=55;
  printf("\na in fun2 is%d",a);
}

void main() { 
int a=3;
  printf("\na in main2 = %d", a);
  myFunction(a); 
  printf("\na in main2 = %d", a);
}
