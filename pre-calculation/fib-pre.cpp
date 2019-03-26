#include <iostream>

using namespace std;

const int MAX_FIBS = 100;

long long fib(int n) {
  static long long fibs[MAX_FIBS + 1];
  static bool first_run = true;

  if (first_run) {
    first_run = false;
    fibs[0] = 0;
    fibs[1] = 1;
    for (int i = 2; i <= MAX_FIBS; i++) {
      fibs[i] = fibs[i - 1] + fibs[i - 2];
    }
  }

  return fibs[n];
}

int main() {
  int n;
  cin >> n;

  cout << fib(n) << endl;

  return 0;
}
