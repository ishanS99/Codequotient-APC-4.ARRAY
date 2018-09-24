#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int t,n,i,j,c,co,ans;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int a[n];
    co=0;
    ans=100000;
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      c=1;
      for(j=i+1;j<n;j++)
      {
        if(a[i]==a[j])
          c++;
      }
      if(c>co)
      {
        ans=a[i];
        co=c;
      }
      else if(c==co && ans>a[i])
        ans = a[i];
    }
    printf("%d\n",ans);
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

