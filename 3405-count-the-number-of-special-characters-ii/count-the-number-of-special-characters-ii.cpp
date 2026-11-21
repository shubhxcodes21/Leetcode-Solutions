class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> l(26, -1);
        vector<int> u(26, -1);

        for(int i=0;i<word.size();i++) {
           
            if(islower(word[i])) 
             l[word[i] - 'a'] = i;
            
            else {
               if(u[word[i]-'A'] == -1) 
                    u[word[i]-'A'] = i;
                
            }
        }

        int ans = 0;
        for(int i =0;i <26;i++) {
            if(l[i]!=-1 && u[i]!=-1 && l[i]<u[i]) 
                ans++;
     }

        return ans;
    }
};