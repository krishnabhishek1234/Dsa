#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
    bool validParenthesis(string s){
        stack<char> st;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if(c==')' && top!='(' || c=='}' && top!='{' || c==']' && top!='[' ) return false;
            }
        }
        return st.empty();
    }
};

int main(){
    Solution sol;
    string s=  "([])";
    bool ans = sol.validParenthesis(s);
    cout<<ans<<endl;
}