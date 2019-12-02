#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int factorial(int k);


int main()
{
  clock_t begin, end;

  begin=clock();

  int j=8;
  
  long int result;
  result=factorial(j);
  printf("%d!= %ld.\n",j,result);

  end=clock();

  printf("time in seconds= %f.\n",(end-begin)/CLOCKS_PER_SEC);
  
  return(result);
}
	 

long int factorial(int k)
{
  int j;
  long int multiply=1;
  for (j==0;j<k;j++) {multiply=multiply*(k-j);};
  return(multiply);
}