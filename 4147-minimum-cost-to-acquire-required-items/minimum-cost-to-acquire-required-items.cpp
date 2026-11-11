class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1=cost1, c2=cost2,c=costBoth,n1=need1,n2=need2;
        long long p=min(n1,n2);
        long long cp=p*min(c,c1+c2);
        long long r1=n1-p;
        long long r2=n2-p;
        long long cr =r1*min(c1,c)+r2*min(c2,c);
        return cp+cr;
    }
};