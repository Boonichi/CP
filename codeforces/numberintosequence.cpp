#include <bits/stdc++.h>

using namespace std;
bool isPrime[500000];
int k = 0,divis[500000],value[500000];
void sieve(int N) {
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}
void solve(long long n){
    int i = 0;
    int max1 = 0;
    long long m = n;
    while (m != 1){
        if (m % divis[i] == 0){
            value[divis[i]]++;
            if (value[divis[i]] > max1) max1 = value[divis[i]];
            m=m/divis[i];
        }
        else i++;
    }
    bool check = false;
    long long ans = 1;
    for (int i = 0; i < k; i++){
        if (value[divis[i]] == max1 && check == false){
            for (int j = 0; j < value[divis[i]] - 1;j++){
                cout << divis[i] << ' ';
            }
            ans*=divis[i];
            check = true;
        }
        else if (value[divis[i]] > 0){
            ans*=divis[i];
        }
    }
    cout << ans << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    sieve(200000);
    for (int i = 2; i <= 200000;i++){
        if (isPrime[i] == true){
            divis[k] = i;
            k++;
        }
    }
    while (t--){
        long long n;
        cin >> n;
        for (int i = 0 ;i <= 200000;i++) value[i] = 0;
        solve(n);
    }
    return 0;
}