class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums, 0, nums.size() - 1);        
    }

private:
    TreeNode* convert(vector<int>& nums, int left, int right) {
        if (left > right) {
            return nullptr;
        }
        
        int mid = left + (right - left) / 2;
        
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = convert(nums, left, mid - 1);
        node->right = convert(nums, mid + 1, right);
        
        return node;
    }    
};