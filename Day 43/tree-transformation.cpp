//User function Template for C++

class Solution {
    public:
    int solve(int N, vector<int> p){
        set<int> st;
        for(int i=0;i<N;i++){
            if(p[i]!=-1 && p[i]!=0){
                st.insert(p[i]);
            }
        }
        return st.size();
        
    }
};
