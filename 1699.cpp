#include <iostream>
#include <math.h>

using namespace std;

int dp[100002];

int main() {
  int n;
  cin>>n;

  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  int min;
  int temp;
  for(int i =3; i<=n; i++){
    min = 1000002;
    for(int j = 1; j<=int(sqrt(i)); j++){
      temp = 1 + dp[i - j*j];
      if(min > temp){
        min = temp;
      }
    }
    dp[i] = min;
  }

  cout << dp[n];

  return 0;
}