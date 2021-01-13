#include <bits/stdc++.h>

using namespace std;
int n;
char a[500][500];
void solver(){
    for (int i = 0; i < n;i++){
        int sl = 0;
        for (int j = 0; j < n; j++){
            if (a[i][j] == 'X') sl++;
            else{
                if (sl >= 3){
                    int k = j - 2;
                    while (sl > 0){
                        a[i][k] = 'O';
                        sl-=3;
                        k-=3;
                    }
                }
                sl = 0;
            }
        }
        if (sl >= 3){
            int k = n - 3;
            while (sl >0){
                a[i][k] = 'O';
                sl-=3;
                k-=3;
            }
        }
    }
}
void solvec(){
    for (int i = 0; i < n;i++){
        int sl = 0;
        for (int j = 0; j < n; j++){
            if (a[j][i] == 'X') sl++;
            else{
                if (sl >= 3){
                    int k = j - 2;
                    while (sl > 1){
                        a[k][i] = 'O';
                        sl-=3;
                        k-=3;
                    }
                }
                sl = 0;
            }
        }
        if (sl >= 3){
            int k = n - 3;
            while (sl > 1){
                a[k][i] = 'O';
                sl-=3;
                k-=3;
            }
        }
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        solver();
        solvec();
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) cout << a[i][j];
            cout << endl;
        }
    }    
    return 0;
}