class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
         if(n==1)
              return nums[0];
        if(n==2){
            if(nums[0]>nums[1])return nums[0];
            else
                return nums[1];
        }
        vector<int>dp(n);
        dp[n-1]=nums[n-1];
        dp[n-2]=nums[n-2];
        dp[n-3]=dp[n-1]+nums[n-3];
        for(int i=n-4;i>=0;i--){
            int ans=-1;
            for(int j=i+2;j<n;j++){
                ans=max(ans,dp[j]);
            }
                
            
            dp[i]=ans+nums[i];
        }
        sort(dp.begin(),dp.end());
        return dp[n-1];
        
    }
};