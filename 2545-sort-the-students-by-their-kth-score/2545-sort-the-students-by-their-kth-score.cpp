class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
//       vector<vector<int>> result;
//       int n = score.size();
//       int m = score[0].size();
//         map<int,int> mp;
//       for(int i=0;i<n;i++){
//         mp[score[i][k]]=i;
//       }
      
//       for(int i=0;i<n;i++){
//         map<int,int>::iterator it;
//         it = mp.begin();
//         vector<int> ans;
//         for(int j=0;j<m;j++){
//           ans.push_back(score[it->second][j]);
//         }
//         ++it;
//         result.push_back(ans);
//         ans.clear();
//       }
//       return result;
      
      
    vector<vector<int>> result;
    int n = score.size();
    int m = score[0].size();
    map<int,int,greater<int>> mp; // Use greater<int> to sort in descending order
    
    // Populate the map with scores and corresponding row indices
    for(int i = 0; i < n; i++) {
        mp[score[i][k]] = i;
    }
    
    // Iterate over the map and push the corresponding rows into the result
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        vector<int> ans;
        for(int j = 0; j < m; j++) {
            ans.push_back(score[it->second][j]);
        }
        result.push_back(ans);
    }
    
    return result;


    }
};