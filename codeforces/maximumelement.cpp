#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int q;
        cin >> q;
        cout << q << endl;
        if (q == 1) {
            int a;
            cin >> a;
            if (v.empty()) {
                v.push_back(a);
            }
            else {
                v.push_back(max(a,v[0]));
            }
        }
        if (q == 2) {
            v.pop_back();
        }
        if (q == 3) 
        {
            cout << v.begin() << endl;
        }
    }
    return 0;
}