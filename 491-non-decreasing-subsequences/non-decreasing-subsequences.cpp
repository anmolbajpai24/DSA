class Solution {
public:
    int n;

    void backtrack(vector<int>& nums, int idx, vector<int>& current, vector<vector<int>>& result){
        if(current.size()>=2){
            result.push_back(current);
        }

        unordered_set<int> repeatSet;

        for(int i = idx; i < n; i++){
            // repeatSet.find(nums[i]) == repeatSet.end() if element is not found, it returns repeatSet.end()
            if((current.empty() || nums[i] >= current.back()) && repeatSet.find(nums[i]) == repeatSet.end()){
                current.push_back(nums[i]);
                backtrack(nums,i+1, current, result);
                current.pop_back();

                repeatSet.insert(nums[i]);
            }
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        n = nums.size();
        backtrack(nums, 0, current, result);
        return result;
    }
};