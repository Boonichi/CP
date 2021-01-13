#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long M = 1e9 + 7;
void update(int id; int value, int u, int v, int l, int r){
    if (l > r || u > r || v < l) return;
    if (u <= l && v >= r){
        seg[id]+=value;
        return;
    }
    int mid = (l + r)/2;
    update(id * 2,value,u,v,l,mid);
    update(id * 2 + 1, value, u,v, mid + 1, r);
    seg[id] = seg[id * 2] + seg[id * 2 + 1];
}
int get(int id, int u, int v, int l ,int r){
    if (l > r || u > r || v < l) return 0;
    if (u <= l && v >= r) return seg[id];
    int mid = (l +r ) / 2;
    return get(id * 2,u,v,l,mid) + get(id * 2,u,v,mid + 1, r);
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    int vt = -1;
    vector<int> count;
    vector<int> a(n);
    vector<int> b;
    int past = -INT_MAX;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++){
        if (a[i] != past){
            past = a[i];
            vt++;
            count.push_back(1);
            b.push_back(past);
        }
        else count[vt]++;
    }
    for (int i = 0; i < n; i++){
        cin >> n;
        update(1,count[i],i,i,0,n - 1);
    }
    while (q--){
        char c;
        int x,y;
        if (c == '?'){
            int pos1 = n + 1, l = 0, r = n - 1;
            while (l <= r){
                int mid = (l + r) / 2;
                if (b[mid] >= x){
                    pos1 = mid;
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            int pos2 = n + 1; l = 0; r = n - 1;
            while (l <= r){
                int mid = (l + r)  2;
                if (b[mid] <= x){
                    pos2 = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            cout << get(pos1) - get(pos2 - 1) << endl;
        }
        else{
            update(1,);
        }
    }
    return 0;
}