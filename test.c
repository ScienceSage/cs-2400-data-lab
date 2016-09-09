#include "stdio.h"

int test(int x);

int main() {
  printf("%x\n", test(0x80000000));
  return 0;
}

int test(int x)
{
  int half = x | (x >> 16); //16
  int quarter = half | (half >> 8); //8
  int eighth = quarter | (quarter >> 4);
  int sixt = eighth | (eighth >> 2);
  printf("%x\n", sixt);
  return (sixt | (sixt)) & 1;
}