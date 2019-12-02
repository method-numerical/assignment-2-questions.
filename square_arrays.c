#include <stdio.h>
#include <stdlib.h>

int main()                    
{ 
  int *y;
  y=calloc(100,sizeof(int));
  
  for (int j=0;j<100;j++)                   /* creates an array of 1^2, 2^2, .......... */
    {	
	y[j]=(j+1)*(j+1);
	printf("%d\t",y[j]);	
     };
 
  return 0;
  free(y);
}
