class Solution {
public:
    bool isPalindrome(string s) {
        string cleanedString;
        string reverse;
        for(char c : s){
            if(isalnum(c)){
                cleanedString += tolower(c);
            }
        }
        for(int i = cleanedString.length() - 1; i >= 0; i--){
            reverse += cleanedString[i];
        }
        return reverse == cleanedString;
    }
};