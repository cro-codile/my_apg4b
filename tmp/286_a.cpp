#include <bits/stdc++.h>
using namespace std;


int main() {

   int n,p,q,r,s;
   
   cin >> n >> p >> q >> r >> s;

   int a[n+1];
   int b[n+1];

   for(int i=1; i<n+1; i++){
      cin >> a[i];
   }

   int val = s - r;
   for(int i=0; i<=val; i++){
      int tmp;
      tmp = a[p+i];
      a[p+i] = a[r+i];
      a[r+i] = tmp;
      
   }

   for(int i=1; i<n+1; i++){
      if(i == n){
         cout << a[i] << endl;
      }else{
         cout << a[i] << " ";

      }
      // swap(a[p - 1 + i], a[r - 1 + i]); たぶん入れ替えでｋる。
   }
   return 0;

}