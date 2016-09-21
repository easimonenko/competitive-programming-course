#include <iostream>
#include <cstdio>
using namespace std;

int main (int argc, char *argv[])
{
	#if defined(ONLINE_JUDGE)
	freopen("../../../tests/input.txt", "r", stdin);
	freopen("../../../tests/output.txt", "w", stdout);
	#endif

	string line;
	while (cin >> line) {
		cout << line << endl;
	}
	
	return 0;
}
