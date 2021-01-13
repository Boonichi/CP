#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,st,max,x,i = 1;
    cin >> t;
    while (t--){
        cin >> x;
        cout << "Case #" << i <<":"<< ' ';
        if (x % 2 != 0) cout << 1 << endl;
        else if (x == 6) cout << -1 << endl;
        else{
            if ((x / 2) % 2 == 0) cout << 2 << endl;
            else if ((x / 2) % 2 != 0){
                if (x % 3 == 0) cout << 2 << endl;
                else if (x % 3 != 0) cout << 3 << endl; 
            }
        } 
        i++;
    }
    return 0;
}