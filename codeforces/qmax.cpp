#include <bits/stdc++.h>

using namespace std;
int seg[1000000],add[1000000];

void update(int id, int l, int r, int u , int v, int value){
    if (l > r || v < l || u > r) return;
    if (u <= l && r <= v){
        seg[id]+= value; add[id]+=value;
        return;
    }
    update(id*2,l,(l+r)/2,u,v,value);
    update(id*2+1,(l+r)/2+1,r,u,v,value);
    seg[id] = max(seg[id*2],seg[id*2+1]) + add[id];
}
int get(int id, int l, int r, int u, int v){
    if (l > r || v < l || u > r) return INT_MIN;
    if (u <= l && r <= v) return seg[id];
    return max(get(id*2,l,(l+r)/2,u,v),get(id*2+1,(l+r)/2+1,r,u,v)) + add[id];
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int u,v,k;
    while (m--){
        cin >> u >> v >> k;
        update(1,1,n,u,v,k);
    }
    int t;
    cin >> t;
    while (t--){
        cin >> u >> v;
        cout << get(1,1,n,u,v) << endl;
    }
    return 0;
}