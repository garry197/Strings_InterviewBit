int Solution::isNumber(const string A) {
    
    if(A.size()==0)
    return 0;
    int n=A.size();
    int i=0;
    while(A[i]==' ')
    i++;
    int j=n-1;
    
    while(A[j]==' ')
    j--;
   
    if(i>=n)
    return 0;
    
    if(!isdigit(A[i]))
    {
        if(A[i]=='-'||A[i]=='.')
        {
         if(i+1<n&&isdigit(A[i+1])) 
            i=i+2;
        }
        else
        return 0;
    }
    int e=0;
    int dot=0;
  while(i<=j)
  {
      if(A[i]=='u')
      return 0;
      if(isdigit(A[i]))
      {i++;
     // cout<<"test";
      continue;}
      
       if(A[i]=='e'&&e==1)
       return 0;
       if(A[i]=='e')
      {
          e=1;
          if(i+1<n&&isdigit(A[i+1]))
          {i=i+2;
      continue;}
       else if(i+2<n&&A[i+1]=='-'&&isdigit(A[i+2]))
          {i=i+3;
      continue;}
             else
            return 0;
      }
      
      if(A[i]==' ')
      return 0;
      if(A[i]=='.'&&e==1)
      return 0;
      if(A[i]=='.'&&dot==1)
      return 0;
      if(A[i]=='.')
      {     dot=1;
          if(i+1<n&&isdigit(A[i+1]))
          {i=i+2;
      continue;}
      else
      return 0;
      }
      
      if(!isdigit(A[i]))
      return 0;
      
  }
    
    return 1;
    
    
    
    
}
