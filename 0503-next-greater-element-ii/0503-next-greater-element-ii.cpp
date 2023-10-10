class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
      vector<int> ans;
      int n= arr.size();
        for(int i=0;i<n;i++){
          int flag=1;
          int curr=-1;
          for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
              curr=arr[j];
              flag = 0;
              break;
            }
          }
          if(flag){
            for(int k=0;k<=i;k++){
              if(arr[i]<arr[k]){
              curr=arr[k];
              break;
            }
            }
          }
        ans.push_back(curr);
        }
        // reverse(ans.begin(),ans.end());
        return ans;
    }
};