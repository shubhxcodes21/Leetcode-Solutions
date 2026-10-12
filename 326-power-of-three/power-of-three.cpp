class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1 ||  n==3) return true;
        long long num=3;
        while(num<=n)
        {
            num*=3;
            if(num==n)
             return true;
        }
        return false;
        
    }
};