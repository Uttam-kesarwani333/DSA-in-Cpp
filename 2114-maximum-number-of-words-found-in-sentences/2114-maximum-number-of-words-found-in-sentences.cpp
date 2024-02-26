#include<limits.h>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int cnt =0;
        int maxi = INT_MIN;
        for(auto str : sentences){
          // maxi = max(maxi, count(str.begin(), str.end(), ' ') +1);
          if((maxi< count(str.begin(), str.end(), ' ') +1) )
             maxi = count(str.begin(), str.end(), ' ') +1;
        }
      return maxi;
    }
};