#include <stdio.h>
#include <stdlib.h>

int main()                    
{ 
  int *y;
  y=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++)                   /* creates an array of 1^2, 2^2, .......... */
    {	
	printf("%d\t",y[j]);
	y[j]=(j+1)*(j+1);
     };
 
  return 0;
}
