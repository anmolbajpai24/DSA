class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long windowSum = 0;
        unordered_map<int,int> windowElements; 

        for(int i = 0; i < k; i++){
            windowElements[nums[i]]++;
            windowSum += nums[i]; 
        }

        // Check for distinct elements
        long long maxSum = (windowElements.size() == k) ? windowSum : 0;

        for(int i = k; i < nums.size(); i++){
            windowSum += nums[i] - nums[i-k];

            windowElements[nums[i-k]]--;

            // If element count is 0 we can erase it so that size comparison later on is accurate
            if(windowElements[nums[i-k]] == 0){
                windowElements.erase(nums[i-k]);
            }

            windowElements[nums[i]]++;

            // Check for distinct elements before updating maxSum, if they are not distinct, count will be less than k
            if(windowElements.size() == k){
                maxSum = max(windowSum,maxSum);
            }

        }

        return maxSum;
    }
};