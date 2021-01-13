#include <bits/stdc++.h>

using namespace std;
int fa[1000000], nos[1000000];
int father(int a){
    if (fa[a] !=a) fa[a] = father(fa[a]);
    return fa[a];
}
bool merge(int u, int v){
    u = father(u); v = father(v);
    if (u == v) return false;
    else{
        if (nos[u] < nos[v]){
            fa[u] = v;
            nos[v]+=nos[u];
        }
        else{
            fa[v] = u;
            nos[u]+=nos[v];
        }
    }
    return true;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < 1000000; i++){
        fa[i] = i;
        nos[i] = 1;
    }
    int u,v,k;
    while (t--){
        cin >> u >> v >> k;
        if (k == 1) merge(u,v);
        if (k == 2){
            if (father(u) == father(v)) cout << '1' << endl;
            else cout << '0' << endl;
        }
    }
    return 0;
}