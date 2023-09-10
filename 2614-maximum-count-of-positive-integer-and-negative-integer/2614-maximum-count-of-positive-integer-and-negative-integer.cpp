class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int p=0;
        int n=0;
        int maxCnt=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) ++n;
            else if(nums[i]>0) ++p;
            maxCnt=max(n,p);
        }
    return maxCnt;
    }
};