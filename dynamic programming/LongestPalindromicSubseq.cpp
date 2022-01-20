class Solution {
    private:
      int lcs(string a, string b, int n , int m){
          int dp[n+1][m+1];
          for(int i=0;i<n+1;i++){
              for(int j=0;j<m+1;j++){
                  if(i==0 || j==0){
                      dp[i][j]=0;
                  }
              }
          }
          for(int i=1;i<n+1;i++){
              for(int j=1;j<m+1;j++){
                  if(a[i-1]==b[j-1]){
                      dp[i][j]=1+dp[i-1][j-1];
                  }
                  else
                      dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
              }
          }
          return dp[n][m];
          
      }
public:
    int longestPalindromeSubseq(string s) {
       string x = string(s.rbegin(),s.rend());
        int n=s.length();
        return lcs(s,x,n,n);
        
    }
};