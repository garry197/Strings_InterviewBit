string Solution::countAndSay(int A) {
    
    if(A==1)
    {
        
        return "1";
    }
    
     if(A==1)
    {
        
        return "11";
    }
    string ans="11";
    A--;
    while(--A)
    {
        string tmp;
        for(int j=0;j<ans.length();)
        {
            int count=1;
            
            char y=ans[j];
            j++;
            
            while(j<ans.length()&&y==ans[j])
            {
                j++;
                
                count++;
            }
            tmp=tmp+to_string(count);
            tmp=tmp+y;
        }
        ans=tmp;   
    }
    return ans;
    
    
    
    
    
    
    
}
