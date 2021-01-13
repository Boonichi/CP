#include <bits/stdc++.h>

using namespace std;
#define long unsigned long long
int cnt,a;
long revert(long n){
	long s= 0;
	
	while(n>0){
		s=s*10 + n%10;
		n/=10;
	}
	
	return s;
}
long solve(){
    cout << a;
    while (cnt <= 1000){
        long b = revert(a);
        a = a + b;
        if (a % 7 == 0) return a;
        cnt++;
    }
    if (cnt > 1000) return -1;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long a;
    while (t--){
        cin >> a;
        cnt = 0;
        if (a % 7 == 0) cout << a << endl;
        else cout << solve() << endl;
    }
    return 0;
}