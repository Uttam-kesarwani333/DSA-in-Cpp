class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() == 0) return true;
        int count=0;
        int len = word.length();
        for(int i=0;i<len;i++){
            int ch = word[i];
            if(ch >= 65 && ch <=91){
                count++;
            }
        }
        if(count == len) return true;
        if(count == 0) return true;
        if(count  == 1 && word[0] >=65 && word[0] <= 91) return true;
        return false;

    }
};