class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        string temp = "";
        for(int i = 0; i < num.size() - 2; i++){
            temp =  num.substr(i, 3);
            if(temp[0] == temp[1] && temp[1] == temp[2]){
                ans = max(temp,ans);
            }
        }
        return ans;
    }
};