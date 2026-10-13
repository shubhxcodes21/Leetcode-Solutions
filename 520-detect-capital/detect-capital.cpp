class Solution {
public:
    bool detectCapitalUse(string word) {
        string temp= word;
        for( char &x: word)
         x= toupper(x);
         if(word==temp)
          return true;
        for( char &x: word)
         x= tolower(x);
        if(word==temp)
         return true;
        
        for(int i=0;i<temp.size();i++)
        {
            if(i==0)
             {
                if(!(temp[i]>='A' && temp[i]<='Z'))
                 return false;
            }
            else
            {
                if(!(temp[i]>='a' && temp[i]<='z'))
                 return false;
            }
        }
        return true;
         
         
        
    }
};