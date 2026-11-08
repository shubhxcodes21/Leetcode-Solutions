class Solution {
public:
    int digitsum(long long n) {
        int sum=0;
        while(n>0){
            sum+= n%10;   
            n/= 10;         
        }
        return sum;
    }
    long long makeIntegerBeautiful(long long n, int target) {
        long long temp=n;    
        long long t=1;
        while (digitsum(n)>target){
            t*= 10;           
            if(temp%t !=0){
                n = temp/t;
                n++;
                n*=t;
            }   
            else
                n =temp;
        }
        return n -temp;       
    }
};