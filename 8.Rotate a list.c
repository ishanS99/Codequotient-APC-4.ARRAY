#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int t,n,r,x,y,i;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&r);
    if(r>=n)
        r=r-n;
    //r=(r%n);
    int k=n;
    int pos =0;
    x=a[pos];
    if(r>0)
    {
        while(k--)
        {
          if(pos-r<0)
            pos=pos+n;
          y=a[pos-r];
          a[pos-r] = x;
          x=y;
          pos-=r;
        }
    }
    for(i=0;i<n-1;i++)
    {
      printf("%d ",a[i]);
    }
    printf("%d\n",a[n-1]);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

