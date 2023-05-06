#include <bits/stdc++.h>
using namespace std;


int main() {
    
     int N;
    int M;

    cin >> N;
    cin >> M;

    int a[N];
    int b[M];

    for(int i=0; i<N; i++){
        cin >> a[i];
    };
    int sum = 0;
    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        sum += a[num-1];
    };
    cout << sum << endl;
    return 0;
}