class Solution {
public:
    string capitalizeTitle(string title) {
        int start=0;
        title+=' ';
        string ans="";
        for(int i=0;i<=title.size();i++)
        {
            if(title[i]==' ')
            {
                int end=i;
                string s= title.substr(start,end-start);
                start=end+1;
                if(s.size()==1) s[0]=tolower(s[0]);
                else if(s.size()==2){ s[0]=tolower(s[0]); s[1]=tolower(s[1]);}
                else{
                for(int j=0;j<s.size();j++)
                {
                    if(j==0)
                     s[j]=toupper(s[j]);
                    else
                     s[j]=tolower(s[j]);
                }}

                ans+=s;
                if(end!= title.size()-1)
                 ans+=' ';

            }
        }
        return ans;
        
    }
};