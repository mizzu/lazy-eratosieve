#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char * argv[])
{
  unsigned int x = strtol(argv[1], NULL, 10);
  printf("%d\n", x);
  char n[x+1];
  int i;
  int j;
  int sum = 0;
  for(i = 2; i < x+1; i++)
  {
    n[i]=1;
  }
  for(i = 2; i < ceil(sqrt(x)); i++)
    {
      if(n[i] == 1)
      for(j = i*i; j < x+1; j+=i)
        n[j] = 0;
    }
  for(i = 2; i < x+1; i++)
  {
        if(n[i] == 1)
        printf("%d, ", i);
        sum += i;
  }
  printf("\nsum of primes: %d ", sum);
}
