int kthLargest(int arr[], int size, int k)
{
  int i,j,c;
    for(i=0;i<size;i++)
  	{
      for(j=0;j<size-i-1;j++)
      {
        if (arr[j] < arr[j+1])
        {
          c = arr[j];
          arr[j]= arr[j+1];
          arr[j+1] = c; 
        }
      }
  	}
  c=0;
  /*int max=arr[0];
  if(k==0)
    return max;
  for(i=1;i<size;i++)
  {
    
    if(arr[i]!=max)
    {
      max=arr[i];
      c++;
    }
    if(c==k)
      break;
    
  }*/
  
 return arr[k];
  
}