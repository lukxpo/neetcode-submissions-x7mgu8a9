class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> checked;

        for (int i = 0, n = nums.size(); i < n; i++)
        {
            if (checked.count(nums[i]))
                return true;
            
            checked.insert(nums[i]);
        }
        return false;
    }
};