#include <bits/stdc++.h>

using namespace std;
string s;
int n;
void coutstack(vector<int> stack){
    cout << "coutstack" << endl;
    while (!stack.empty()){
        cout << stack.back() << ' ';
        stack.pop_back();
    }
    cout << endl;
}
void input(){
    cin >> s;
    n = s.length();
}
void solve(){
    vector<int> stack;
    int ans = 0;
    int i = 0;
    if (s[i] == 'B') {stack.push_back(s[i]); i++;}
    while (i < n){
        if (s[i] == 'A') stack.push_back(s[i]);
        else if (i > 0 && s[i] == 'B' && stack.back() == 'A') stack.pop_back();
        else stack.push_back(s[i]);
        i++;
    }
    int slb = 0;
    while (!stack.empty()){
        if (stack.back() =='A') {
            ans++;
            stack.pop_back();
        }
        if (stack.back() =='B') {
            slb++;
            stack.pop_back();
        }
    }
    if (slb > 0 && slb % 2 != 0) ans+=1;
    cout << ans << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        input();
        solve();
    }
    return 0;
}