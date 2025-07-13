class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> duplicateSet;
        for(int num : nums){
            if(duplicateSet.count(num) > 0){
                return true;
            }
            duplicateSet.insert(num);
        }
        return false;
    }
};