class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<char> st;
           for(int i=0; i<s.length(); i++){
               st.push(s[i]);
           }
           string a;
           string ans;
           while(!st.empty()){
               char r=st.top();
               st.pop();
               if(r!='+' && r!='-' && r!='*' && r!='/'){
                   a=a+r;
               }
               else{
                   for(int i=a.length()-1; i>=0 ; i--){
                       ans=ans+a[i];
                   }
                   a.erase();
                   ans=ans+r;
               }
               
           }
           for(int i=a.length()-1; i>=0 ; i--){
                       ans=ans+a[i];
                   }
                   return ans;
        }
};
