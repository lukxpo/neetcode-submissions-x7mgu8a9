class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;

        for (int i = 0, n = nums.size(); i < n; i++) {
            int dif = target - nums[i];
            if (hash.contains(dif))
                return vector<int>{hash[dif], i};
            hash[nums[i]] = i;
        }
    }
};
