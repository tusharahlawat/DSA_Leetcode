class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s = nums.size();
        int i = 0;
        while(i<s){
            if(nums[i]==val){
                for(int j = i;j<s-1;j++){
                    nums[j]=nums[j+1];
                }
                s--;
                }
            else{
                i++;
            
            }
        }
        return s;
    }
};