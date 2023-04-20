
class Solution
{
    public:
    string reverse(string str)
    { 
        int i=0;
        int j=str.size()-1;
        
        while(i<=j){
            if(isalpha(str[i]) && isalpha(str[j])){
                swap(str[i],str[j]);
                i++,j--;
            }
            
            else if(isalpha(str[i])==false){
                i++;
            }
            
            else {
                j--;
            }
        }
        
        return str;
    } 
};
