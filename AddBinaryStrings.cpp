string Solution::addBinary(string A, string B) {
    
    
    reverse(A.begin(),A.end());
     reverse(B.begin(),B.end());
    int size1=A.size();
    int size2=B.size();
    
    int i=0;
    int j=0;
    int carry=0;
    string ans;
    while(i<A.size()&&i<size2)
    {
        
    int a=int(A[i]);
    int b=int(B[i]);
    //cout<<"A"<<a<<" "<<"B"<<b;
    if(a==48)
    a=0;
    else
    a=1;
    if(b==48)
    b=0;
    else
    b=1;
    int c=a^b;

    c=c^carry;
    if(c==1)
     ans=ans+'1';
     else
     ans=ans+'0';
    if((a==1&&b==1)||(a==1&&carry==1)||(b==1&&carry==1))
    carry=1;
    else
    carry=0;
    
    i++;
    }
    while(i<size1)
    {
      int a=int(A[i]);
      if(a==48)
    a=0;
    else
    a=1;
    
      int c=a^carry;
      if(c==1)
     ans=ans+'1';
     else
     ans=ans+'0';
      if(a==1&&carry==1)
      carry=1;
      else
      carry=0;
      
      i++;
      
    }
     while(i<size2)
    {
      int a=int(B[i]);
       if(a==48)
    a=0;
    else
    a=1;
      int c=a^carry;
      if(c==1)
     ans=ans+'1';
     else
     ans=ans+'0';
      if(a==1&&carry==1)
      carry=1;
      else
      carry=0;
      
      i++;
      
    }
    
    if(carry==1)
    ans=ans+"1";
    
    reverse(ans.begin(),ans.end());
    return ans;
    
    
    
    
    
    
}
