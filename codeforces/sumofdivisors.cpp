#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long M = 1e9 + 7;
vector<bool> is_prime(2000000, true);
vector<int> prime;
ll power(int x, int y){
    if (y == 0) return 1;
    if (y == 1) return x;
    if (y % 2 == 0) return power(x,y / 2) * power(x,y / 2) % M;
    else return (power(x,y / 2) * power(x,y / 2) % M) * x % M;
}
ll sumofdivisors(ll n){
    int i = 0,sl = 0;
    ll res = 1;
    while (n > 1){
        if (n % prime[i] == 0){
            sl++;
            n/=prime[i];
        }
        else{
            res=res * (power(prime[i],sl + 1) - 1)/(prime[i] -1) % M;
            i++;
            sl = 0;
        }
    }
    if (sl > 0) res = res * (power(prime[i],sl + 1) - 1)/(prime[i] - 1) % M;
    return res;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    for (int i = 2; i * i < 1000005; i++) {
        if (is_prime[i] == true){
        for (int j = i * i; j < 1000005; j += i){
            is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= 1000000;i++){
        if (is_prime[i] == true) prime.push_back(i);
    }
    while (t--){
        ll n;
        cin >> n;
        cout << sumofdivisors(n) << endl;
    }
    return 0;
}