#include <bits/stdc++.h>
using namespace std;


int main() {

   // 287_A

   int n;
   cin >> n;
   int sum = 0;
   string s;
   for(int i=0; i<n; i++){
      
      cin >> s;
      
      if(s == "For"){
         sum++;
      }else{
         sum--;
      }
   }

   if(sum > 0){
      cout << "Yes" << endl;
   }else {
      cout << "No" << endl;
   }


 
}