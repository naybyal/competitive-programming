#include <bits/stdc++.h>
#include <cmath>

using namespace std;

typedef long long ll;
//  binet's formula (closed form formula for calculating fibonacci numbers)
int main() {
  int n;
  cin >> n;
  ll binet = (pow((1+sqrt(5)),n) - pow((1-sqrt(5)), n))/(pow(2,n)*sqrt(5));

  printf("%d\n", binet);

  return 0;
}

