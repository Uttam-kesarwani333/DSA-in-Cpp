class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x:s){
            if(x=='(' || x=='{' || x=='[') st.push(x);
            else {
                if(st.empty()) return false;
                char ch = st.top();
                if(ch=='(' && x ==')' ||ch=='{' && x =='}' ||ch=='[' && x ==']') st.pop();
               else return false;
            }
        }
    if(st.empty()) return true;
    else return false;
    }
};