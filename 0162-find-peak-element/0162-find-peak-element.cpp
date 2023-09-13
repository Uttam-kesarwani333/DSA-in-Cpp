class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        int idx=0;
        int maxEle=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>maxEle){
                idx=i;
                maxEle=nums[i];
            }
            
        }
        return idx;
    }
};