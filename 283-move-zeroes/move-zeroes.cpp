class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int l=0;
     int r=0;
     while(l<nums.size()){
        if (nums[l]!=0){
            swap(nums[l],nums[r]);
                
                r++;
            }
         l++;
        }
        
     

    }
};