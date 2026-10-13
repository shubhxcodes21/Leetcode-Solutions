class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n,sum=0;
        while(n>0)
        {
            int d= n%10;
            sum= sum*10+d;
            n/=10;
        }
        return abs(sum-temp);
        
    }
};