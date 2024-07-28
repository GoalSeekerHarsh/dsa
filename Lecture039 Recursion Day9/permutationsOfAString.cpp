//https://www.naukri.com/code360/problems/permutations-of-a-string_985254

#include <bits/stdc++.h>

void solve(string str, vector<string> &ans, int index) {

    if(index >= str.length()) {
        ans.push_back(str);
        return;
    }

    for(int i = index; i < str.length(); i++) {
        swap(str[index], str[i]);
        solve(str, ans, index + 1);
    }
}


vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    int index = 0;

    solve(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
    
}