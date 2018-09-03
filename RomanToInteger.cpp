int help(char c)
{
    if(c=='X')
    return 10;
    if(c=='V')
    return 5;
    if(c=='I')
    return 1;
    if(c=='L')
    return 50;
    
    if(c=='C')
    return 100;
    if(c=='D')
    return 500;
    if(c=='M')
    return 1000;
    
    
}


int Solution::romanToInt(string A) {
    int sum=0;
    int n=A.size()-1;
    int s;
    int tmp=INT_MIN;
    for(int i=0;i<A.size();)
    {
        char c=A[i];
        int count=1;
        i++;
        while(i<A.length()&&c==A[i])
        {
            count++;
            i++;
        }
        s=help(c);
        if(i==A.length())
        {
            sum=sum+count*s;
            return sum;
        }
         
        int y=s*count;
        tmp=help(A[i]);
        if(tmp>s)
       sum=sum-y;
       else
        sum=sum+y;
    }
    
    
    return sum;
    
    
    
}
