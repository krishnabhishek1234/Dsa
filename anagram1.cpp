#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
int main(){
    string a="INTEGER";
    string b="ITGRNEE";
    Solution sol;
    bool result=sol.isAnagram(a,b);
    if(result==1){
        cout<<"True"<<endl;
    }else
    cout<<"False"<<endl;
   
}