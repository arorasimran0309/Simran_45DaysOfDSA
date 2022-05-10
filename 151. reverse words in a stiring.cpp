class Solution {
public:
    string reverseWords(string s) {
         stack<string> st;
        string tmp = "";
        
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ') {
                if(tmp.length()) {
                    st.push(tmp);
                    tmp = "";
                }
            }
            else {
                tmp += s[i];
            }
        }
        if(tmp.length()) {
            st.push(tmp);
        }
        string ans = "";
        while(!st.empty()){
            // last word
            if(st.size() == 1){
                ans += st.top();
				break;
            }else{
                ans += st.top() + " ";
            }
            st.pop();
        }
        return ans;
    }
};
