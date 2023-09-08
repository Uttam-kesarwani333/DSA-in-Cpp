class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCandie=0;
        for(auto candie: candies){
            if(candie>=maxCandie) maxCandie=candie;
        }
        
        for(auto candie: candies){
            if(candie + extraCandies >=maxCandie) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};