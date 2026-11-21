class Solution {
public:
    string greatestLetter(string s) {
        vector<int> u(26, 0);
        vector<int> l(26, 0);
        for (int i = 0; i <s.size(); i++) {
          
            if (isupper(s[i]))
             u[s[i] - 'A']=1;
            else 
             l[s[i] - 'a']=1;
            
        }
       
        for (int i = 25;i>=0; i--) {
            if (u[i] && l[i]) 
                return string(1,(i+'A'));
    }
        return "";
    }
};