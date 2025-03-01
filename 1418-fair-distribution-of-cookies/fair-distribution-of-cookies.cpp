class Solution {
public:
    int n;
    int result = INT_MAX;

    void backtrack(int idx ,vector<int>& cookies, vector<int>& temp, int k){
        if(idx >= n){
            int unfairness = *max_element(begin(temp), end(temp));
            result = min(unfairness,result);
            return;
        }

        for(int i = 0; i < k; i++){
            temp[i] += cookies[idx];
            backtrack(idx+1, cookies, temp, k);
            temp[i] -= cookies[idx];
        }
    }
     
    int distributeCookies(vector<int>& cookies, int k) {
        n = cookies.size();
        vector<int> children(k,0);
        backtrack(0, cookies, children, k);
        return result;
    }
};