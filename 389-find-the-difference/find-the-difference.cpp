class Solution {
public:
    char findTheDifference(string s, string t) {
       unordered_map<char,int> charFrequency;

       for(char &character: s){
        charFrequency[character]++;
       }

       for(char &character: t){
        charFrequency[character]--;
        if(charFrequency[character] < 0){
            return character;
        }
       }
        return 'a';
    }
};
