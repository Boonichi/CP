#include <bits/stdc++.h>

using namespace std;
string s;
map<string,int> sl;
bool cmp(pair<string, int>& a, 
         pair<string, int>& b) 
{ 
    return a.second > b.second; 
} 
void print_map(map<string,int> const &m)
{
    vector<pair<string,int>> a;
    for (auto const& pair: m){
        a.push_back(pair);
    }
    sort(a.begin(),a.end(),cmp);
    for (auto const& pair: a){
        cout << pair.first << endl;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        sl[s]+=1;
    }
    print_map(sl);
    return 0;
}