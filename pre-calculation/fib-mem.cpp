#include <iostream>

using namespace std;

const int MAX_FIBS = 100;

int fib(int n) {
  static int fibs[MAX_FIBS + 1];

  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else if (fibs[n] > 0) {
    return fibs[n];
  } else {
    fibs[n] = fib(n - 1) + fib(n - 2);
    return fibs[n];
  }
}

int main() {
  int n;
  cin >> n;

  cout << fib(n) << endl;

  return 0;
}
