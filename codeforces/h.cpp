#include <bits/stdc++.h>

using namespace std;
string n;
int k;
void solve(){
    int dem;
    for (int i=1 ; i<= n.length();i ++){
        if (n[i]==',') dem=i;
    }
    int so=0;
    int j=1;
    for (int i=n.length();i>=1;i=i-1){
        j=j*10;
        so=so + 1;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    solve();
    return 0;
}