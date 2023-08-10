/*
Write a program in C to generate all the prime numbers from M to N.(M<N)
Test Data :
Enter M and N: 10 23
Expected Output :
[11] [13] [17] [19] [23].
*/

#include <stdio.h>

int main () 
{
  int M;
  int N;
  int i;
  int j;
  int c = 0;
  printf("Provide M and N : ");
  scanf("%d %d", &M, &N);
  for (i = M, i <= N; i++) {
    for (j = 2; j < i; j++) {
      printf("[%d] ", i);
    }
  }
  return 0;
}
