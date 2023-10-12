class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n= nums.size() ,cnt = 0;
        for(int i=0 ; i<n ;i++){
            int first_digit , num = nums[i];
            while(num >0){
                first_digit = num% 10;
                num/=10;
            }
            for(int j= i+1; j<n ; j++){
                if(__gcd(first_digit , nums[j]% 10) == 1) cnt++;   
            }
          
        }
          return cnt;
    }
};