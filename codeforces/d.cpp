#include<bits/stdc++.h>
using namespace std;
int cnt;
int mod(string num, int a) 
{ 
    int res = 0;  
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 
string revert(string num){
	string y;
	for (int i = num.length() - 1; i >= 0; i--) y+=num[i];
	return y;
}
string findSum(string str1, string str2) 
{ 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.push_back(carry+'0'); 
    reverse(str.begin(), str.end()); 
  
    return str; 
} 
int main(){
	//freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	string n;
	while(t--){
		cin >> n;
		cnt = 1;
		while (mod(n,7) != 0 && cnt <= 1000){
			cnt++;
			n = findSum(n,revert(n));
		}
		if (cnt > 1000) cout << -1 << endl;
		else cout << n << endl;
	} 
}
