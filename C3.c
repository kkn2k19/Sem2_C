/*
Write a program in C to take a number and check whether it is Prime or not.

Enter a number: 25
Expected Output :
25 is NOT PRIME

Enter a number: 11
Expected Output :
11 is NOT PRIME
*/

#include <stdio.h>

int main () 
{
  int i;
  int c = 0;
  printf("Provide n : ");
  scanf("%d", &n);
  for (i = 2; i < n; i++) {
    if (n%i == 0) {
      c++;
      break;
    }
  }
  if (c == 0) {
   printf("%d is a PRIME NUMBER.\n", n);
  }
  else {
   printf("%d is a not a PRIME NUMBER.\n", n);
  }
  return 0;
}
