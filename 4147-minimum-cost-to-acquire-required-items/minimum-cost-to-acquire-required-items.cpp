class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long p=min(1LL*need1,1LL*need2);
        long long cp=p*min(1LL*costBoth,1LL*(cost1+cost2));
        long long r1=(1ll*need1)-p;
        long long r2=(1ll*need2)-p;
        long long cr =r1*min(1LL*cost1,1LL*costBoth)+r2*min(1LL*cost2,1LL*costBoth);
        return cp+cr;
    }
};