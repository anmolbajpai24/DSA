class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int ans = 1;
        int maxAns = 1;

        for(int i = 0; i < nums.size() - 1; i++){
            if (nums[i + 1] == nums[i]) {
                continue;
            } 
            else if(nums[i + 1] == nums[i] + 1){
                ans++;
            }
            else{
                ans = 1;
            }
            maxAns = max(maxAns, ans);
        }
        return maxAns;
    }
};