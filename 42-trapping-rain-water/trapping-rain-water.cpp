class Solution {
public:
    int trap(vector<int>& height) {
        long long sum=0,a=0,b=height.size()-1;
       int  maxi1= height[a],maxi2=height[b];
        while(a<b)
        {
            if(maxi1<maxi2)
            {
                sum= sum+ (maxi1-height[a]);
                a++;
                maxi1= max(maxi1,height[a]);
            }
            else{
                sum= sum+ (maxi2-height[b]);
                b--;
                maxi2= max(maxi2,height[b]);
            }
          
        }
        return sum;
    
        
        
    }
};