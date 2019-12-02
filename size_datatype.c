#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <float.h>


int main()
{
  printf("size of int: %ld bytes\n",sizeof(int));
  printf("size of float: %ld bytes\n",sizeof(float));
  printf("size of double: %ld bytes\n",sizeof(double));
  printf("size of unsigned char: %ld bytes\n",sizeof(char));
  printf("size of long int: %ld bytes\n",sizeof(long int));
  return 0;

  }
