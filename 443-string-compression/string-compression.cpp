class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0,i=0;
         while (i < n) {
            char ch = chars[i];
            int count = 0;
            while (i<n && chars[i]==ch) {
                i++;
                count++;
            }
            chars[write++] = ch;
            if (count > 1) {
                for (char d : to_string(count)) {
                    chars[write++] = d;
                }
            }
        }
        return write;
    }
};