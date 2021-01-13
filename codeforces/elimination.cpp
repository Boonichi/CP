#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,a,b,c,d;
    cin >> t;
    while (t--){
        cin >> a >> b >> c >> d;
        cout << max(a+b,c+d) << endl;
    }    
    return 0;
}