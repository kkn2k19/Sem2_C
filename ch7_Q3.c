/*
Write a program to create an array of 10 integers and store multiplication table of 5 in it.
*/

#include <stdio.h>

int main ()
{
  int i;
  int arr[30];
  int n = 10;
  for (i = 0; i < n; i++) {
    arr[i] = 5*(i+1);
  }
  printf("Table of 5 : \n");
  for (i = 0; i < n; i++) {
    printf("%d x %d : %d\n", 5, i, arr[i]);
  }
  return 0;
}
