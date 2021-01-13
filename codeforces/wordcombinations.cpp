#include <bits/stdc++.h>

using namespace std;
struct trie{
    int next[26];
    bool leaf = false;
    trie(){
        fill(begin(trie),end(trie), - 1);
    }
};
void addstring(string s){
    int v = 0;
    for (char ch: s){
        char c = ch - 'a';
        if (trie[v][c] == -1){
            trie[v][c] = trie.size();
            trie[v][c].emplace_back();
        }
        v = trie[v][c];
    }
    trie[v].leaf = true;
}
int go(int v, char ch){
    int c = ch - 'a';
    if (t[v].go[c] == -1){
        
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    trieadd(s);
    for (int i = 0; i <= n; i++){
        cin >> s;
        trieadd(s);
    }
    return 0;
}