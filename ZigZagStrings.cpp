string Solution::convert(string A, int B) {
    
    int n=A.size();
    
    
    if(B==1||n==1||n==0)
    return A;
    
    int i=0;
   // int mul=2*B-2;
    
   string arr[B];
   
   bool d=true;
   int row=0;
   while(i<n)
   {
      arr[row].push_back(A[i]);
      
      if(row==B-1)
      d=false;
      else if(row==0)
      d=true;
      
      if(d==true)
      row++;
      else
      row--;
      i++;
   }
   string ans;
   for(int j=0;j<B;j++ )
   {
       ans=ans+arr[j];
   }
   return ans;
    
    
    
    
    
    
    
    
    
    
    
    
}
