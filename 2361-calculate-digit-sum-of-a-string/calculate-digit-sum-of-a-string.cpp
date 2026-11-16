class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.length()>k){
        string ans="";
        for(int i=0;i<s.length();i+=k)
        {
            int sum=0;
            int j=0;
            while(j<k && i+j<s.length())
            {
                sum+=s[i+j]-'0';
                j++;
            }
            ans+=to_string(sum);

        }
        s=ans;
     }
        return s;

        

        
    }
};