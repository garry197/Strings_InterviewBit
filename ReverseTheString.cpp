void Solution::reverseWords(string &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   string arr[]=strtok(a," ");

     string tmp="";
     for(int i=arr.length()-1;i>0;i--)
  {   tmp=tmp+arr[i];
     tmp=tmp+" ";
 }
     tmp=tmp+arr[0];
     a=tmp;
 }
    
    
    
   
    
    

