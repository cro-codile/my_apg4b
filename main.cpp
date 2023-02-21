#include <bits/stdc++.h>
using namespace std;
 
int main() {

  int n,a;

  string ans = "No";
  cin >> n >> a;

  int mod = n % 500;
  if(mod == 0 || a >= mod){
    ans = "Yes";
  }

  cout << ans << endl;
}