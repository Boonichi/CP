#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,res = 0,i = 1;
        cin >> n;
        while (res < n){
            res+=i;
            i++;
        }
        if (res - n == 1) cout << i;
        else cout << i - 1;
        cout << endl;
    }
    return 0;
}