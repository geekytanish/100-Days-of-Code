// User function Template for C++

class Solution{
public:

    bool isPrime(int x){
        if(x <= 1)
            return false ;
        for(int i=2 ; i<=sqrt(x) ; i++){
            if(x%i == 0)
                return false ;
        }
        return true ;
    }
    long long primeProduct(long long L, long long R){
        long long ans = 1 ;
    
        for(int i=L ; i<=R ;i++){
            if(isPrime(i))
                ans = (ans*i)%(1000000007) ;
        }
    
        return ans ;
    }
};
