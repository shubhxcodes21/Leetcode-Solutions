class Solution {
public:
    int reverseInt(int x) {
        int rev=0;
        while (x>0){
            rev=rev*10+(x%10);
            x/=10;
        }
        return rev;
    }

    bool sumOfNumberAndReverse(int num) {
        for(int x=0;x<=num;x++){
            if(x+reverseInt(x)==num)
                return true;
        }
        return false;
    }
};