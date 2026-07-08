class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::vector<int> checked = {};

        for (int i = 0, n = nums.size(); i < n; i++)
        {
            for (int j = 0, m = checked.size(); j < m; j++)
            {
                if (nums[i] == checked[j])
                {
                    return true;
                }
            }
            checked.push_back(nums[i]);
        }

        return false;
    }
};