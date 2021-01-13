#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define N 4
int n,x;
int grid[1000][1000];
int dp[1000][1000];
int p[1000];
int getSum(int r1, int r2, int c1, int c2)
{
    return dp[r2][c2] - dp[r2][c1] - dp[r1][c2]
           + dp[r1][c1];
}
void solve()
{
    int res = 0;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1]
                               - dp[i][j] + grid[i][j];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
         {
             for (int k = 0; (i +k <= n && j + k <= n);k++){
            int sum = getSum(i, i + k, j, j + k);
            //cout << sum << endl;
            if (sum == x) res+=1;
            }
        }
    cout << res;
}
int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) grid[i][j] = p[i] + p[j];
    }
    solve();
    return 0;
}