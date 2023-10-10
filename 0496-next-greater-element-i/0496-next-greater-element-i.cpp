class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i = 0 ;i<n;i++){
            int idx=0;
            // int flag=1;
            for(int j =0 ;j<m;j++){
                if(nums1[i]==nums2[j]){
                    idx=j;
                    // flag=0;                     
                }
            }   
            if(idx!=-1){
                int curr=-1;
                for(int k=idx+1;k<m;k++){
                    if(nums2[idx]<nums2[k]){
                        curr=nums2[k];
                        break;
                    }   
                }
                ans.push_back(curr);
            }
            else ans.push_back(-1);

        }
        return ans;
    }
};