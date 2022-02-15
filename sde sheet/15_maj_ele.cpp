class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int e=nums[0];
           for(auto&it:nums){
               if(c==0)e=it;
               if(e==it)c++;
               else c--; 
           }
        return e;
    
    }
};