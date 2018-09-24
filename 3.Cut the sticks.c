int* cutSticks(int lengths_size, int *lengths, int *result_size) 
{
	int i,flag=1,c,min,p=0;
  int ans[lengths_size];
  
  //ans = (int *)malloc(lengths_size* sizeof(int));
  while(flag!=0)
  {
    flag=0;
    c=0;
    min=lengths[0];
    for(i=1;i<lengths_size;i++)
    {
      if(min<1 || (lengths[i]<min && lengths[i]!=0))
      {
        min=lengths[i];
      }
    }
    for(i=0;i<lengths_size;i++)
    {
      if(lengths[i]>0)
      {
        lengths[i]-=min;
        c++;
        flag=1;
      }
    }
    ans[p]=c;
    p++;
  }
  *result_size = (p-1);
  for(i=0;i<p-1;i++)
  {
    lengths[i]=ans[i];
  }
  return lengths;
}





