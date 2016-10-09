#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main (int argc, char *argv[])
{
	#if defined(ONLINE_JUDGE)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	cout << n << endl;
	cout << a[0];
	for (int i = 1; i < n; i++) {
		cout << ' ' << a[i];
	}
	cout << endl;
	
	return 0;
}

