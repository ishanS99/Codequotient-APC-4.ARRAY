void moveElements(int a[], int n)
{
  int i,j;
  for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            for(j=i;j<n-1;j++)
            {
                if(a[j+1]>=0)
                {
                    //swap(a[j],a[j+1]);
                  int temp = a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
                }
                else
                    break;
            }
        }
        if(a[i]>=0)
        {
            for(j=i;j>0;j--)
            {
                if(a[j-1]<0)
                {
                    //swap(a[j],a[j-1]);
                  int temp = a[j];
                  a[j]=a[j-1];
                  a[j-1]=temp;
                }
                else
                    break;
            }
        }
    }
}



