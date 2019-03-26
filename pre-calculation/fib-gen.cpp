#include <iostream>

using namespace std;

int main() {
  const int MAX_FIBS = 100;
  static long long fibs[MAX_FIBS + 1];
  fibs[0] = 0;
  fibs[1] = 1;
  for (int i = 2; i <= MAX_FIBS; i++) {
    fibs[i] = fibs[i - 1] + fibs[i - 2];
  }
  cout << "{ ";
  cout << fibs[0];
  for (int i = 1; i <= MAX_FIBS; i++) {
    cout << ", " << fibs[i];
  }
  cout << " }" << endl;
  return 0;
}
