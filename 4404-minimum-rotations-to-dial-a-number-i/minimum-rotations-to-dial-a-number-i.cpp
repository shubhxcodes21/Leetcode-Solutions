class Solution {
public:
    int minRotations(string s) {
        int sum=0;
       int curr = 0;

        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';

            int diff = abs(curr - digit);

            sum += min(diff, 10 - diff);

            curr = digit;
        }
        return sum;
    }
};