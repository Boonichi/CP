	
#include <bits/stdc++.h>
const int N = 300005;
const int MOD = 1337377;
using namespace std;
char s[N], aa[111];
int f[N];
int n;
 
struct node {
    int a[26]; int e;
    int& operator[] (int i) {return a[i];}
    node() {for(int i=0; i<26; i++) a[i] = 0; e = 0;}
};
 
vector<node> a;
 
void Add(char *s) {
    int pos = 0, i, c;
    for(i=0; c = s[i]; i++) {
        if (a[pos][c - 'a'] == 0) {
            a.push_back(node());
            a[pos][c - 'a'] = a.size() - 1;
        }
        pos = a[pos][c - 'a'];
    }
    a[pos].e = 1;
}
 
int main()
{
    gets(s); scanf("%d\n", &n);
    int i, j, pos, c;
    a.push_back(node());
    for(i=1;i<=n; i++) {
        gets(aa); Add(aa);
    }
    f[0] = 1;
    for(i=0; s[i]; i++) {
        pos = 0;
        for(j=i; c = s[j]; j++) {
            if (a[pos][c - 'a'] == 0) break;
            pos = a[pos][c - 'a'];
            if (a[pos].e == 1) f[j+1] = (f[j+1] + f[i]) % MOD;
        }
    }
    printf("%d\n", f[strlen(s)]);
    return 0;
}