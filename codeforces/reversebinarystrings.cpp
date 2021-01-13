#include <bits/stdc++.h>

using namespace std;
int n;
string s;
void coutstack(vector<char> stack){
    while (!stack.empty()){
        cout << stack.back() << ' ';
        stack.pop_back();
    }
    cout << endl;
}
void solve(){
    cin >> n;
    cin >> s;
    vector<char> stack;
    int i = 1; 
    int ans = 0;
    stack.push_back(s[0]);
    while (i < n){
        if (s[i] != stack.back()) {
            stack.push_back(s[i]);
            i++;
        }
        else if (s[i] == stack.back()){
            ans++;
            stack.push_back(s[i]);
            i++;
            while(i < n && s[i] != stack.back()){
                stack.push_back(s[i]);
                i++;
            }
            if (stack.back() == '1') stack.back() = '0';
            else stack.back() = '1';
        }
    }
    stack.clear();
    int ans1 = 1;
    if (s[0] == '1') stack.push_back('0');
    else stack.push_back('1');
    i = 1;
    while(s[i] != stack.back()){
                stack.push_back(s[i]);
                i++;
            }
    while (i < n){
        if (s[i] != stack.back()) {
            stack.push_back(s[i]);
            i++;
        }
        else if (s[i] == stack.back()){
            ans1++;
            stack.push_back(s[i]);
            i++;
            while(i < n && s[i] != stack.back()){
                stack.push_back(s[i]);
                i++;
            }
            if (stack.back() == '1') stack.back() = '0';
            else stack.back() = '1';
        }
    }
    cout << min(ans,ans1) << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}