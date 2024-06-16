#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 5;
  long long x = 1;
  for (int i = 2; i<=n; i++) {
    x = (x*i);
  }

  printf("The factorial is %d\n", x);
}
