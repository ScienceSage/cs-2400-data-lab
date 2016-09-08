#include "stdio.h"

int divpwr2(int x, int n);

int main() {
  printf("%d\n", divpwr2(-33,4));
  return 0;
}

int divpwr2(int x, int n)
{
	// // Something is needed to account for x >> n if positive and x >> n + 1 if negative

	// // Subtract 1 from 2^n
	// // This accounts for the need to + 1
	// int mask = (1 << n) + ~0;

	// // Use & operator on mask and sign bit of x 
	// int equalizer = (x >> 31) & mask;

	// // Adds 1 if x was originally negative
	// // Adds 0 if x was originally positive
	// return (x + equalizer) >> n;
  int sign = x >> 31;
  printf("%d\n", sign);
  if (sign < 0) {
    sign = 1;
  }

  return (x >> n) + sign;
}