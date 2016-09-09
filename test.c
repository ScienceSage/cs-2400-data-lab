#include "stdio.h"

int test(int x, int n);

int main() {
  printf("%x\n", test(5,3));
  return 0;
}

int test(int highbit, int lowbit)
{
	return 1 << 31;
}