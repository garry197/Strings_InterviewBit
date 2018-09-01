int minlength(vector<string> A)
{
    int mini=INT_MAX;
    
    
    
    
    for(int i=0;i<A.size();i++)
    {
        if(mini>A[i].length())
        mini=A[i].length();
    }
      
    
    return mini;
}



string Solution::longestCommonPrefix(vector<string> &A) {
    int c=minlength(A);
    string tmp="";
    char b;
    for(int i=0;i<c;i++)
    {
        b=A[0][i];
        for(int j=1;j<A.size();j++)
        {
            if(b!=A[j][i])
            return tmp;
        }
        
        tmp.push_back(b);
        
    }
    return tmp;
}
    

