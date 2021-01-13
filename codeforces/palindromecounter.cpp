#include <bits/stdc++.h>

using namespace std;
long long  tong[100],ans;
int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    tong[0] = 2;
    tong[1] = 9;
    tong[2] = 18;
    tong[3] = 108;
    tong[4] = 198;
    tong[5] = 1098;
    tong[6] = 1998;
    tong[7] = 10998;
    tong[8] = 19998;
    tong[9] = 109998;
    tong[10] = 199998;
    tong[11] = 1099998;
    tong[12] = 1999998;
    tong[13] = 10999998;
    tong[14] = 19999998;
    tong[15] = 109999998;
    tong[16] = 199999998;
    tong[17] = 1099999998;
    tong[18] = 1999999998;
    tong[19] = 10999999998;
    tong[20] = 19999999998;
    tong[21] = 109999999998;
    tong[22] = 199999999998;
    tong[23] = 1099999999998;
    tong[24] = 1999999999998;
    tong[25] = 10999999999998;
    tong[26] = 19999999999998;
    tong[27] = 109999999999998;
    tong[28] = 199999999999998;
    tong[29] = 1099999999999998;
    tong[30] = 1999999999999998;
    tong[31] = 10999999999999998;
    tong[32] = 19999999999999998;
    tong[33] = 109999999999999998;
    tong[34] = 199999999999999998;
    tong[35] = 1099999999999999998;
    int n;
    while (t--){
        cin >> n;
        long long ans = 0;
        for (int i = n; i>=0;i--){
            ans+=tong[i];
        }
        cout << ans << endl;
    }    
    return 0;
}