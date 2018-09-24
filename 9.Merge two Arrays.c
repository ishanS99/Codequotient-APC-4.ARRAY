#include<stdlib.h>
int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
  int *c=(int *)malloc(sizeof(int)*(asize+bsize));
  int k=0,i=0,j=0;
	while(i<asize && j<bsize)
    {
      if(a[i]<b[j])
        c[k++]=a[i++];
      else
        c[k++]=b[j++];
    }
  while(i<asize)
  {
    c[k++]=a[i++];
  }
  while(j<bsize)
  {
    c[k++]=b[j++];
  }
  return c;
}
