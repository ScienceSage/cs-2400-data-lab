#include "stdio.h"

int test(int x, int n);

int main() {
  printf("%x\n", test(0x87654321,4));
  return 0;
}

int test(int x, int n)
{
	int basic_shift = x >> n;
  printf("%x\n", basic_shift);
  int temp = (1 << (32 - n)) + ~0;
  printf("%x\n", temp);
  return basic_shift & temp;
}