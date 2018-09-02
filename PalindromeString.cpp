int Solution::isPalindrome(string A) {
    
    if(A.size()==1)
    return 1;
    
    int left=0;
    int right=A.length()-1;
    while(left<=right)
    {
        char a=A[left];
        char b=A[right];
        if(a==' ')
        {
            left++;
            continue;
            
        }
        if(b==' ')
        {
            right--;
            continue;
            
        }
        if(a<48||(a>90&&a<97)||(a>57&&a<65)||(a>123))
        {
            left++;
            continue;
        }
        if(b<48||(b>90&&b<97)||(b>57&&b<65)||(b>123))
        {
            right--;
            continue;
        }
        if(b>64&&b<91)
       b=b+32;
        
        if(a>64&&a<91)
        a=a+32;
        
       //cout<<a<<" "<<b<<endl;
       
       
        if(a==b)
        {
            left++;
            right--;
            continue;
        }
        else
        return 0;
    }
    return 1;
    
    
    
}
