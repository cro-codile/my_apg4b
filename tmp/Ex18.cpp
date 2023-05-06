#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main()
{

   int N, M;
   cin >> N >> M;

   vector<int> A(M), B(M);

   for(int i=0; i<M; i++){
      cin >> A.at(i) >> B.at(i);
   }

   vector<vector<string>> result(N, vector<string>(N, "-"));

   for(int i=0; i<M; i++){
      result.at(A.at(i)-1).at(B.at(i)-1) = "o";
      result.at(B.at(i)-1).at(A.at(i)-1) = "x";

   }

   for(int i=0; i<N; i++){
      for(int j=0; j<N; j++){
         if(j == (N-1)){
            cout << result.at(i).at(j);
         }else{
         cout << result.at(i).at(j) << " ";
            
         }

      }
      cout << endl;
   }
   return 0;
}