class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int ans=0;
 set<int>s;
        for(int it:nums){
            s.insert(it);
        }
        for(int it:nums){
            if(!s.count(it-1)){
               int c=1;
                int a=it;
                while(s.count(a+1)){
                    c+=1;
                    a+=1;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};