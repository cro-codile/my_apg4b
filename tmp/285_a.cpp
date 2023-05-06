#include <bits/stdc++.h>
using namespace std;

int main() {

   int a,b;
   cin >> a  >> b;

   int t1,t2;
   t1 = min(a,b);
   t2 = max(a,b);

   if(t1*2 == t2 || t1*2+1 == t2){
      cout << "Yes" << endl;
   }else {
      cout << "No" << endl;
   }

   return 0;
}