#include <bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int n;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,res=0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for (int i = n - 1; i >= 0; i--){
        if (a[i] >= b[k]){
            res+=1;
        }
    }
    cout << n - res;
    return 0;
}