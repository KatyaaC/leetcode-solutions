class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        string se="";
        for (char c: s){
            if (!st.empty() and st.top()==c){
                    st.pop();
                }
            else{st.push(c);}
        }
        while(!st.empty()){
            se+=st.top();
            st.pop();
        }
        reverse(se.begin(), se.end());
        return se;
    }
};