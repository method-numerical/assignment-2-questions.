#include <stdio.h>
#include <stdlib.h>

float *mean_variance(int *p, int size);     /*take an array,return an array of mean and variance.*/

struct data {float mean, variance;};	    /* declare the structure of outputs to write to bin file.*/

int main()                    
{ 
  int *y;
  y=malloc(100*sizeof(int));
  
  for (int j=0;j<100;j++)                   /* creates an array of 1^2, 2^2, .......... */
    {y[j]=(j+1)*(j+1);};

  float *q;  				    /* q is an array of mean and  variance of any array.*/
  q=mean_variance(y,100);
  
  struct data values;			    /* it refer the structure as "values".*/

  FILE *fp;
  fp=fopen("result.bin","rb");
  fread(&values,sizeof(struct data),1,fp);
  printf("mean=%f\t variance=%f.\n.",values.mean,values.variance);
  
  free(y);
  free(q);
 
  return 0;
}


float  *mean_variance(int *p, int size)     /*take an array,return an array of mean and variance.*/
{   
  int j;
  float mean, variance;
 
  int sum=0;  
  for (j=0;j<size;j++)			    /* it adds all element of any given array.*/
    {sum += p[j];};
  
  mean=sum/(float)size;			    /* mean is average of the sum.*/

  int sq_sum=0;  
  for (j=0;j<size;j++)			    /* it adds squares of deviation for each element.*/
    {sq_sum += (p[j]-mean)*(p[j]-mean);};

  variance=sq_sum/(float)size;	                    /* variance = average of sum of squares of deviation.*/
  
  
  float *w;  				    /* w is output array containing mean and variance.*/
  w=malloc(2*sizeof(float));
  w[0]=mean;
  w[1]=variance;
  
  return(w);
  
  free(w);
}

