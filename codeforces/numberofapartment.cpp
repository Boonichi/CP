#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    int n,a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if ((a == 1) or (a == 2) or (a == 4))
        {
            cout << -1 << endl;
        }
        else
        {
            int ans = 0;
            ans = a / 3;
            if (a % 3 == 0) cout << a / 3 << ' ' << 0 << ' ' << 0 << endl;
            if (a % 3 == 1) cout << (a /3 ) - 2 << ' ' << 0 << ' ' << 1 << endl;
            if (a % 3 == 2) cout << (a / 3) - 1 << ' ' << 1 << ' ' << 0 << endl;
        }
    }
    return 0;
}