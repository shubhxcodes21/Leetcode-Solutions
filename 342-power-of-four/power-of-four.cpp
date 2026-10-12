class Solution {
public:
    bool isPowerOfFour(int n) {
        long long num=4;
        if(n==1 || n==4) return true;
        while(num<=n)
        {
            num*=4;
            if(num==n)
             return true;
        }
        return false;
        
    }
};