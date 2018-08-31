int Solution::lengthOfLastWord(const string A) {
    
   if(A.length()==0)
   return 0;
    stack<string> s;
    string tmp;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==' ')
        {
        if(tmp!=""&&tmp!=" ")
            {s.push(tmp);
        tmp="";
                continue;
            }
            else
            continue;
        
        }
        
        tmp=tmp+(A[i]);
    }
    
    if(tmp!=""&&tmp!=" ")
    s.push(tmp);
    
    if(s.size()==0)
    return 0;
     
     tmp=s.top();
   
     return tmp.length();
     
      
    }
    
    
   
    

