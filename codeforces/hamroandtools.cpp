#include <bits/stdc++.h>

using namespace std;
int fa[1000000];
int father(int a){
    if (fa[a] !=a) fa[a] = father(fa[a]);
    return fa[a];
}
void merge(int u, int v){
    u = father(u); v = father(v);
    if (u != v) fa[u] = v;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin >> n >> t;
    for (int i = 1; i <= n; i++){
        fa[i] = i;
    }
    int u,v;
    while (t--){
        cin >> u >> v;
        merge(u,v);
    }
    for (int i =1; i <= n; i++) cout << father(i) << ' ';
    return 0;
}