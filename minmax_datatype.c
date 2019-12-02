#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <limits.h>

int main()
{
  printf("range of char: %d to %d\n",CHAR_MIN,CHAR_MAX);
  printf("range of int: %d to %d\n",SHRT_MIN,SHRT_MAX);
  printf("range of long int: %d to %d\n",LONG_MIN,LONG_MAX);
  printf("range of float: %e to %e\n",FLT_MIN,FLT_MAX);
  printf("range of double: %e to %e\n",DBL_MIN,DBL_MAX);
  
}
