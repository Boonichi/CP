#include <bits/stdc++.h>
int n,s,a[30];
using namespace std;
int input(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++){
        a[ord(s[i])-97]++;
    }
}
int solve(){
    
}
int main(){
    input();
    solve();
    return 0;
}