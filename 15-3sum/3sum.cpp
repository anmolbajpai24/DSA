class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();
        vector<vector<int>> triplets;

        if(n < 3){
            return {};
        }

        sort(nums.begin(), nums.end());

        for(int k = 0; k < n; k++){

            if (k > 0 && nums[k] == nums[k - 1]) continue;

            int n1 = nums[k];
            int i = k + 1;
            int j = n - 1;

            while(i < j){
            int sum = nums[i] + nums[j];

            if(sum == -n1){
                triplets.push_back({nums[i], nums[j], n1});

                int currI = nums[i];
                int currJ = nums[j];

                i++;
                j--;
                
                while(i < j && nums[i] == currI) i++;
                while(i < j && nums[j] == currJ) j--;
            }
            else if(sum < -n1){
                i++;
            }
            else{
                j--;
            }
        }
        }

        return triplets;
    }
};