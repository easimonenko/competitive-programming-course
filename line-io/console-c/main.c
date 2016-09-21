#include <stdio.h>

int main(int argc, char *argv[])
{
	char line[255];
	while (scanf("%s", &line) == 1) {
		puts(line);
	}
	
	return 0;
}

