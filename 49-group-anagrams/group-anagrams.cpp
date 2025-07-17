class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> sortedStrs;

        unordered_map<string,vector<string>> stringMap;

        for(int i = 0; i < strs.size(); i++){
            string sortedString = strs[i];
            sort(sortedString.begin(), sortedString.end());
            stringMap[sortedString].push_back(strs[i]);
        }

        for(auto it : stringMap){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};