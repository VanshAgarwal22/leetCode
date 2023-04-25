// class Solution {
// public:
//     int scoreOfParentheses(string s) {
//         int ans=0, lvl=0;
//         for(int i=0; i<s.size()-1; ++i){
//             if(s[i]=='(' && s[i+1]==')')
//                 ans += 1<<lvl;
//             lvl += s[i]=='('? 1 : -1;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int score = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(score);
                score = 0;
            }
            else {
                
                score = st.top() + max(2 * score, 1);
                st.pop();
            }
        }
        return score;
        
    }
};