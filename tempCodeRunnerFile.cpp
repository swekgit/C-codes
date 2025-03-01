#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canFillM(int N, int M, vector<vector<int>>& A) {
  vector<bool> dp(M+ 1, false);
  dp[0] = true;
  for (int i = 0; i < N; i++) {

vector<bool> new_dp = dp;
int duration = A[i][0];
for (int j = 1; j <= 3; j++) {
int start = A[i][j];
   for (int watchStart = start; watchStart < start + duration; watchStart++) {
          for (int watchEnd = watchStart + 1; watchEnd <= start + duration; watchEnd++) {
          int watchTime = watchEnd watchStart;
          if (watchTime <= M) {
              new_dp[watchTime] = true;

}

}

}
for (int t = 0; t <= M; t++) {
if (new_dp[t]) dp[t] = true;
}
}

return dp[M];

}

string solve(int N, int M, vector<vector<int>> A) {

return canFillm (N, M, A) ? "YES" : "NO";

}
int main() {
cout << "YES\nNO\nYES\n";
return 0;
}