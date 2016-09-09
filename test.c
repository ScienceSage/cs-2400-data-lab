#include "stdio.h"

int test(int x, int n);

int main() {
  printf("%x\n", test(5,3));
  return 0;
}

int test(int highbit, int lowbit)
{
	int mask = ~0;
  printf("%x\n", mask);
  mask = mask & ~((1 << lowbit) + ~0);
  printf("%x\n", mask);
  mask = mask & ((1 << (highbit+1)) + ~0);
  printf("%x\n", mask);
  return mask;
}