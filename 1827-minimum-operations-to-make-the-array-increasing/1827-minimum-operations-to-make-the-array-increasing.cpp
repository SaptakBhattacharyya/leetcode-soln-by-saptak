class Solution {
public:
    int minOperations(vector<int>& nums) {
         int count=0;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(nums[i]>=nums[j]){
                    count +=(nums[i]-nums[j])+1;
                    nums[j]+=(nums[i]-nums[j])+1;
                    
                }
            }
        }
        return count ;
    }
};