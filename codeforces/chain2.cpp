#include <bits/stdc++.h>

using namespace std;
string s;
int trie[1000000][26],nnode = 0,f[1000000],finish[1000000];
void crtrie(string s){
    int j;
    int l = 0;
    for (int i = 0; i < s.length(); i++){
        j = s[i] - 'a';
        if (trie[l][j] == 0) trie[l][j] = ++nnode;
        l = trie[l][j];
    }
    finish[l] = 1; 
}
void solve(){
    for (int i = nnode; i >= 0; i--){
        for (int j = 0; j < 26; j++){
            if (trie[i][j]) f[i] = max(f[i],f[trie[i][j]]);
        }
        f[i] += finish[i];
    }
    cout << f[0];
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        cin >> s;
        crtrie(s);
    }
    solve();
    return 0;
}