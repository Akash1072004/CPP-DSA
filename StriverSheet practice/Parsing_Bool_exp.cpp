#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool parseBoolExpr(string expression) {
        int n = expression.size();
        if(n == 1) return expression[0] == 't';
        stack<char>st;
        bool ans = false;
        for(char c : expression){
            if(c == ',') continue;
            else if(c == ')'){
                bool checkTrue = false;
                bool checkFalse = false;
                while(st.top() != '('){
                    if(st.top() == 't') checkTrue = true;
                    if(st.top() == 'f') checkFalse = true;
                    st.pop();
                }
                st.pop();
                if(st.top() == '&') ans = !checkFalse;
                else if(st.top() == '|') ans = checkTrue;
                else ans = !checkTrue;
                st.pop();
                st.push(ans ? 't' : 'f');
            }
            else st.push(c);
        }
         return ans;


    }
};
int main(){

}