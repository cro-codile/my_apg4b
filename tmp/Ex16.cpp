#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{

   vector<int> vec(5);

   for(vector<int>::size_type i =0; i<vec.size(); i++){
      cin >> vec.at(i);
   }   

   bool b =false;

   int tmp = 0;
   for(vector<int>::size_type i =0; i<vec.size(); i++){
      if(i != 0){
         if(tmp == vec.at(i)) {
            b = true;
         }
      }
      tmp = vec.at(i);

   }   

   if(b){
      cout << "YES" << endl;
   }else {
      cout << "NO" << endl;
   }
  


   
    return 0;
}