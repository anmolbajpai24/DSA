class Solution {
public:
    // Time complexity is n^2*n! because of find
    int n;
    void backtrack(vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
        if(current.size() == n){
            result.push_back(current);
            return;
        }

        for(int i = 0; i < n; i++){
            // if current does not have nums[i], can use set instead of this to reduce TC
            if(find(current.begin(),current.end(),nums[i]) == current.end()){
                current.push_back(nums[i]);
                backtrack(nums, current, result);
                current.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        n = nums.size();
        backtrack(nums, current, result);
        return result;        
    }
};