#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T; cin >> T;
  for(int i = 0; i < T; ++i){
   long long N; cin >> N;
   long long row, col;
   long long r = ceill(sqrt(N*1.0));
   long long v = r*r - N;
   if(v < r){
    row = r;
    col = v+1;
   }
   else{
    col = r;
    row = N - (r-1)*(r-1);
   }
   if(r%2 == 0){
    long long x = col;
    col = row;
    row = x;
   }
   cout << "Case " << i+1 << ": " << col << ' ' << row << '\n';
  }
  return 0;
}
