class Solution {
private:
    void helper(vector<vector<int>> &ans, vector<int>& nums,int i){
        if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j = i;j <nums.size();j++){
            swap(nums[j], nums[i]);
            helper(ans, nums,i+1);
            swap(nums[j], nums[i]);
                                                                                    }
    }
        
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int idx=0;
        helper(ans,nums,0);
        return ans;
    }
};