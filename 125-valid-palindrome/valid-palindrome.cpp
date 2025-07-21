class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedString;
        for(char c : s){
            if(isalnum(c)){
                cleanedString += tolower(c);
            }
        }
        int i = 0;
        int j = cleanedString.length() - 1;
        while(i <= j){
            if(cleanedString[i] != cleanedString[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};