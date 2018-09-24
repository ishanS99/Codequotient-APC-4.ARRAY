void removeDuplicates(int *a, int *p)
{
  int n=*p;
  int i,j=0;
  for(i=0;i<n-1;i++)
  {
    if(a[i]!=a[i+1])
    {
      a[j]=a[i];
      j++;
    }
  }
  a[j++] = a[n-1];
  *p = j;
}
