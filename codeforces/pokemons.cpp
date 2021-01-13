#include <bits/stdc++.h>

using namespace std;
int l,n,a[100000],b[100000];
void input(){
    cin >> l;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int tam;
    for (int i = 0; i < n; i++){
        for (int j =i+1; j < n;j++){
            if (b[i] > b[j]){
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
                tam = b[i];
                b[i] = b[j];
                b[j] = tam;    
            }
        }
    }
}
void solve(){
    int ans = 0;
    for (int i = 0; i < n;i++){
        if (l > (b[i] * M_PI * 2)){
            if (l - (a[i] * (b[i]* M_PI * 2)) >= 0){
                ans+=a[i];
                l = l - (a[i] * (b[i]* M_PI * 2));
            }
            else{
                ans+=l/(b[i]* M_PI * 2);
                l = l - ((b[i]* M_PI * 2) * (l/(b[i]* M_PI * 2)));
            }
        }
    } 
    cout << ans;   
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    solve();
    return 0;
}