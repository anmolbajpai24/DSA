class Solution {
public:
    int n;

    bool isPalindrome(string s, int startIndex, int endIndex){
        while(startIndex < endIndex){
            if(s[startIndex] != s[endIndex]){
                return false;
            }
            startIndex++;
            endIndex--;
        }
        return true;
    }

    void backtrack(string s, int idx, vector<string>& current, vector<vector<string>>& result){
    
        if(idx == n){
            result.push_back(current);
            return;
        }

        for(int i = idx; i < n; i++){
            if(isPalindrome(s, idx, i)){
                // i - idx + 1 because endIndex - startIndex + 1 gives length
                string substring = s.substr(idx, i - idx + 1);
                current.push_back(substring);
                backtrack(s, i+1, current, result);
                current.pop_back();
            }
        }
    
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result; 
        vector<string> current;

        n = s.size();

        backtrack(s, 0, current, result);

        return result;
    }
};