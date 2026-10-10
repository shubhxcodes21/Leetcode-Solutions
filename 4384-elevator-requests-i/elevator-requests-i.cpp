class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int sum=0,diff=0;
        for(int i=0;i<requests.size();i++)
        {
            diff=abs(diff-requests[i]);
           
            sum= sum+diff;
             diff= requests[i];
        }
        return sum;
        
    }
};