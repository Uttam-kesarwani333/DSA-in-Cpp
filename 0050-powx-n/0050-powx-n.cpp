class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);
        double ans=1.0;

        long long nn=abs(n);

        while(nn){
          if(nn%2==0){ //Even Case : 
          x=x*x;
          nn/=2;
          }
          else{
            ans=ans*x;
            nn--;
          }
        }
       if(n<0) ans=1.0/ans;
    return ans;
    }
};