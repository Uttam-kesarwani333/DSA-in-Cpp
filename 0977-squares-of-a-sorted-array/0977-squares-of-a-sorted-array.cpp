class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
      for(auto num : nums){ans.push_back(num*num);}
      sort(begin(ans),end(ans));
      return ans;
    }
};