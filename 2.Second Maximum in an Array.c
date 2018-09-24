#include <stdio.h>
/* Include other headers as needed */
int main()
{

  int a[5],m1,m2,i;
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
    m1=a[0];
  m2=a[1];
  
  for(i=1;i<5;i++)
  {
    if(a[i]>m1)
    {
      m2=m1;
      m1=a[i];
    }
    else if(a[i]>m2 && a[i]!=m1)
    {
      m2=a[i];
    }
    else if(m1==m2)
    {
      m2=a[i];
    }
  }
  printf("%d",m2);
    
    return 0;
}

