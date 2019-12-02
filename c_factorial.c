#include <stdio.h>
#include <stdlib.h>

long int factorial(int k);

int main()
{
  int j;
  long int result;

  result=factorial(j);
  printf("%d!= %ld.\n",j,result);
    
  return(result);
}
	 

long int factorial(int k)
{
  int j;
  long int multiply=1;
  for (j==0;j<k;j++) {multiply *= (k-j);};
  return(multiply);
}

