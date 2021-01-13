#include <bits/stdc++.h>

using namespace std;
int mintree[1000000],a[1000000];
void create(int id, int l, int r){
    if (l == r){
        mintree[id] = a[l];
    }
    else{
        create(id*2,l,(l+r)/2);
        create(id*2+1,(l+r)/2+1,r);
        mintree[id] = min(mintree[id * 2],mintree[id * 2 +1]);
    }
}
int getmin(int id,int l,int r, int u, int v){
    if (v < l || u > r || l > r) return INT_MAX;
    if (u <= l && v >= r) return mintree[id];
    return min(getmin(id * 2,l,(l+r)/2,u,v),getmin(id * 2+ 1,(l+r)/2+1,r,u,v));
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 1; i <= n; i++) cin >> a[i];
        create(1,1,n);
        for (int j = n - 1; j >= 0; j--){
        for (int i = 1; i <= n - j; i++){
            cout << getmin(1,1,n,i,i + j) << ' ';
        }
        cout << endl;
        }
    }
    return 0;
}