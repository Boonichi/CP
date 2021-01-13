#include <bits/stdc++.h>

using namespace std;
int n,k;
string s;
queue<int> q;
void input(){
    cin >> n;
    cin >> s;
}
/*void printq(queue<int> q){
    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
}*/
void solve(){
    int sl = 0;
    for (int i = 1; i < n; i++){
        if (s[i - 1] != s[i]) sl++;
        if (s[i - 1] == s[i]) {
            q.push(sl);
        }
    }
    //printq(q);
    int ans = 0;
    int del = 0;
    for (int i = 0; i < n; i++){
        if (!q.empty()) break;
        q.pop();
        del++;
        ans++;
        cout << del << " " << ans << endl;
        while (!q.empty() && q.front() == i){
            q.pop();
            del++;
            cout << del << " " << ans << endl;
        }
        del++;
    }
    ans+=(n-del + 1) / 2;
    cout << ans;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int t;
    cin >> t;
    while (t --){
        input();
        solve();
    }
    return 0;
}