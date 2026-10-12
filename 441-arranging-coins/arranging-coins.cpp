class Solution {
public:
    int arrangeCoins(int n){
        int c=0,temp=n; 
       for(int i=1;i<=temp;i++)
       {
         if((n-i)>=0)
         {
          n-=i;
          c++;
         }
         else
          break;

       }
       return c;

        
    }
};