class Solution {
public:

    void backtracking(int idx, int n, vector<int>& temp, vector<int>& current, vector<vector<int>>& result, int k){
        if(current.size() == k){
            result.push_back(current);
            return;
        }

        for(int i = idx; i < n; i++){
            current.push_back(temp[i]);
            backtracking(i+1, n, temp, current, result, k);
            current.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> temp;
        vector<int> current;

        for(int i = 1; i <= n; i++){
            temp.push_back(i);
        }

        backtracking(0, n, temp, current, result, k);

        return result;
    }
};