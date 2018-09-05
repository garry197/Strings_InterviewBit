int Solution::compareVersion(string A, string B) {
    int size1=A.size();
    int size2=B.size();
    int startA=0;
    int startB=0;
    while(A[startA]=='0')
    startA++;
    while(B[startB]=='0')
    startB++;
    if(size1==0&&size2==0)
    return 0;
    while(startA<size1&&startB<size2){
        
        long long int sum1=0,sum2=0;
        while(A[startA]!='.'&&startA<size1)
        {sum1=10*sum1+(A[startA]-48);
        startA++;}
        
        while(B[startB]!='.'&&startB<size2)
        {sum2=sum2*10+(B[startB]-48);
        startB++;
            
            if(sum2>sum1)
            return -1;
        }
        if(sum1>sum2)
        return 1;
        else if(sum1<sum2)
        return -1;
        else
        {
            startA++;
            startB++;
        }
    }
    if(startA>=size1&&startB>=size2)
    return 0;
   if(startA>=size1&&startB<size2)
 {
   
     while(B[startB]=='0'||B[startB]=='.')
     startB++;
     
     if(startB==size2)
     return 0;
     else
     return -1;
     
     
 }
   if(startB>=size2&&startA<size1)
   {
       
     while(A[startA]=='0'||A[startA]=='.')
     startA++;
     
     if(startA>=size1)
     return 0;
     else
     return 1;
     
     
 }  }
    
    
    
    
