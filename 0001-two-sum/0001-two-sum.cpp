class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x ;
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                x=nums[i]+nums[j];
                if(x==target){
                    return{i,j};
                }
            }
        }
        return{ };
    }
};