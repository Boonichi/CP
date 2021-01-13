#include <bits/stdc++.h>
long long n,q,l,ans;
int a[100000],cnt[100000],b[100000];
using namespace std;
void solve(){
    for (int i = 1; i <= trunc(sqrt(q));i++){
        if (q % i == 0 && q /i >= i){
            int x = lower_bound(a,a+l,q/i) - a;
            int y = upper_bound(a,a+l,i) - a;
            if (a[x] == q/i) x--;
            if (a[y] == i) y++;
            ans+= cnt[x] - cnt[y - 1];
        }
    }
    cout << ans << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(b,b+n);
    l = 0;
    a[0] = b[0];
    cnt[0] = 1;
    for (int i = 1; i < n; i++){
        if (b[i] == a[l]){
            cnt[l]++;
        }
        else{
            l++;
            a[l] = b[i];
            cnt[l]=cnt[l-1] + 1;
        }
    }
    solve();
    return 0;
}