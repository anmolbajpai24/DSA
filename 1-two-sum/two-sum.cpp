class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> requiredToIndex;

        for (int i = 0; i < nums.size(); i++) {
            if (requiredToIndex.count(nums[i])) {
                return {requiredToIndex[nums[i]], i};
            }

            int required = target - nums[i];
            requiredToIndex[required] = i;
        }

        return {};
    }
};