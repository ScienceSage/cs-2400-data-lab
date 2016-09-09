#include "stdio.h"

int test(int x);

int main() {
  printf("%x\n", test(60));
  return 0;
}

int test(int x)
{
  /* counts each byte, then adds each count from each byte */
  int mask = 1 + (1 << 8) + (1 << 16) + (1 << 24);
  int count = x & mask;
  count += (x >> 1) & mask;
  count += (x >> 2) & mask;
  count += (x >> 3) & mask;
  count += (x >> 4) & mask;
  count += (x >> 5) & mask;
  count += (x >> 6) & mask;
  count += (x >> 7) & mask;
  
  mask = 255;
  int sum = count & mask;
  sum += (count >> 8) & mask;
  sum += (count >> 16) & mask;
  sum += (count >> 24) & mask;
  return sum;
}