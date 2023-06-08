#include <bits/stdc++.h> 
int uniqueSubstrings(string S)
{
    //Write your code here
    string s = "";
    int res, i = 0;
    while (i < S.length()) {
        if (s.find(S[i]) == string::npos) {
            s += S[i];
            if (i == S.length()-1 && s.length() > res) {
                res = s.length();
            }
        } 
        else {
            i -= s.length();
            if (s.length() > res) {
                res = s.length();
            }
            s = "";
        }
        i++;
    }
    return res;
}
