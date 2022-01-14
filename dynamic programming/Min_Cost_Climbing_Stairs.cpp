//cost array contain cost of step at ith step and ypu can take
// 1 or 2 steps at a time
// and at last you can start from first or second stair
//so cal. min cost for each step and ret min of cost at step 1 and 2



class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int dp[n+1];
        dp[n]=0;
        dp[n-1]=cost[n-1];
        for(int i=n-2;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
        }
        return min(dp[0],dp[1]);
    }
};