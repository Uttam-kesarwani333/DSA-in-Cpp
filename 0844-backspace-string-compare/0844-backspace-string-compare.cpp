class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1, st2;
        for(int i=0;i<s.size();i++){
            if(s[i] != '#' ) st1.push(s[i]);
            else if(!st1.empty() && s[i]  == '#') st1.pop();
        }
        s="";
        while(!st1.empty()){
            s+=st1.top();
            st1.pop();
        }
        
        
         for(int i=0;i<t.size();i++){
            if(t[i] != '#' ) st2.push(t[i]);
            else if(!st2.empty() && t[i]  == '#') st2.pop();
        }
        t="";
        while(!st2.empty()){
            t+=st2.top();
            st2.pop();
        }
        
        return s==t;
    }
};