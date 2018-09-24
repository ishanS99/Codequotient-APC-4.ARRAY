#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t,a[5],max,i;
 // scanf("%d",&t);
  //while(t--)
  //{
    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<5;i++)
    {
      if(a[i]>max)
        max=a[i];
    }
    printf("%d\n",max);
 // }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}