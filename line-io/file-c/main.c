#include <stdio.h>

int main (int argc, char *argv[])
{
	freopen("../../../tests/input.txt", "r", stdin);
	freopen("../../../tests/output.txt", "w", stdout);

	char line[255];
	while (scanf("%s", &line) == 1) {
		puts(line);
	}
	
	return 0;
}
