#include <stdio.h>

int main (int argc, char *argv[])
{
	#if defined(ONLINE_JUDGE)
	freopen("sum.in", "r", stdin);
	freopen("sum.out", "w", stdout);
	#endif

	int a, b;
	scanf("%d %d", &a, &b);

	printf ("%d\n", a + b);
	
	return 0;
}

