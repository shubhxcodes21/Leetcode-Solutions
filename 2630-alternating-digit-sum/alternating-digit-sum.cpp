class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,i=0;
        while(n>0){
            if(i%2==0) 
             sum+=(n%10);
            else 
             sum-=(n%10);
            n/=10;
            i++;
            
        }
        if(i%2==0) return 0-sum;
        return sum;
    }
};