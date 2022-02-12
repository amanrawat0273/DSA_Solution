class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(auto&it:nums){
            if(it==1)o++;
            else if(it==0)z++;
            else t++;
        }
        int k=0;
        for(int i=0;i<z;i++)
            nums[k++]=0;
        for(int i=0;i<o;i++)
            nums[k++]=1;
        for(int i=0;i<t;i++)
            nums[k++]=2;
        
        
    }
};






// approach best o(n)
// by using three pointer
 void sortColors(vector<int>& nums) {
       int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
    }
};