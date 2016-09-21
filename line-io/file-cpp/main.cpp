#include <iostream>
#include <cstdio>
using namespace std;

int main (int argc, char *argv[])
{
	freopen("../../../tests/input.txt", "r", stdin);
	freopen("../../../tests/output.txt", "w", stdout);

	string line;
	while (cin >> line) {
		cout << line << endl;
	}
	
	return 0;
}
