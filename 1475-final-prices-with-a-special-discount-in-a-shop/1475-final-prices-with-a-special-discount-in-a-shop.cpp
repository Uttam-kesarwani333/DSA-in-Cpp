class Solution {
public:
   
vector<int> finalPrices(vector<int>& prices) {
    stack<int> st;
    vector<int> ans;
    
    for (int i = prices.size() - 1; i >= 0; i--) {
        int val = prices[i];

        while (!st.empty() && st.top() > val) {
            st.pop();
        }

        if (st.empty()) {
            ans.push_back(val);
        } else {
            ans.push_back(val - st.top());
        }

        st.push(val);
    }

    reverse(ans.begin(), ans.end()); // Reverse the result to get the correct order
    return ans;
}

};