#include <bits/stdc++.h>
#define ll long long
using namespace std;
int sum,a[1000000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector <ll> a(n);
    for (ll i=0;i<n;i++) cin >> a[i];
    ll sum = 0;
    vector <ll> pre(n);
    for (ll i=0;i<n;i++)
    {
        sum+=a[i];
        if (i > 0)
        pre[i] = max(pre[i-1]+a[i], abs(sum));
        else pre[i] = abs(sum);
    }
    sum = 0;
    vector <ll> suf(n+1);
    for (ll i=n-1;i>=0;i--)
    {
        sum+=a[i];
        if (i==n-1) suf[i] = abs(sum);
        else suf[i] = max(abs(sum),a[i] + suf[i+1]);
    }
    suf[n] = 0;
    ll ans = 0;
    for (ll i=0;i<n;i++)
    {
        ans = max(pre[i]+suf[i+1],ans);
    }
    cout<<ans;
    return 0;
}