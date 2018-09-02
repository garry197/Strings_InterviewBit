/*string rev(string A){
    reverse(A.begin(),A.end())
    return A;
}


bool check( string A)
{
    string B=reverse(A);
    if(A==B)
    return true;
    return false;
    
}

*/

string Solution::longestPalindrome(string A) {
    
    int n=A.size();

if(n==1)
return A;



string ans=A.substr(0,1);
int arr[n][n];

int max=0;
int maxindex=0;
for(int i=n-1;i>-1;i--)
{
    arr[i][i]=1;
    max=1;
    maxindex=i;
}
for(int i=n-2;i>-1;i--)
{
    if(A[i]==A[i+1])
    {
       arr[i][i+1]=1;
       maxindex=i;
       max=2;
       
       if(ans.length()!=2)
       {
           ans=A.substr(i,2);
       }
    }
    else
    arr[i][i+1]=0;
}
    
    
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n+1-k;i++)
        {
            int j=i+k-1;
            if(arr[i+1][j-1]==1&&A[i]==A[j])
            {
                arr[i][j]=1;
                if(k>max)
                {
                    max=k;
                   ans=A.substr(i,k);
                }
                
                
            }
            else
            arr[i][j]=0;
          
        }
    }
    return ans;
    
    
    
}
