int Solution::solve(string A) {
    
    int size;
    if(A.size()%2==0)
     size=(A.size()/2)-1;
    else
     size=A.size()/2;
    int s=A.size();
    while(size>0)
    {
        int left=size-1;
        
        int right=size+1;
        while(left>=0&&A[left]==A[size])
        left--;
        while(right<s&&A[right]==A[size])
        right++;
        
       // cout<<left<<" "<<right<<endl;
        
        int flag=1;
        while(left>=0&&right<s&&A[left]==A[right])
        {
            
            
            
            left--;
            right++;
            
        }
        if(left<0&&right>s-1)
        return 0;
        if(left<0&&right!=s)
        return s-right;
        if(A[left]!=A[right])
        size--;
    }
    return s-1;
    
    
    
    
    
    
    
    
    
}
