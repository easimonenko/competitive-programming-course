#include <iostream>
#include <cstdio>
using namespace std;

int main (int argc, char *argv[])
{
	#if defined(ONLINE_JUDGE)
	freopen("sum.in", "r", stdin);
	freopen("sum.out", "w", stdout);
	#endif

	int a;
	cin >> a;
	int b;
	cin >> b;

	cout << a + b << endl;

	return 0;
}
