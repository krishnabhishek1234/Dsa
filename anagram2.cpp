#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int freq[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        for (int i = 0; i < t.length(); i++) {
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
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