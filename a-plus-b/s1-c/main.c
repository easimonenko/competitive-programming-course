#include <stdio.h>

int main (int argc, char *argv[])
{
	#if defined(ONLINE_JUDGE)
	freopen("sum.in", "r", stdin);
	freopen("sum.out", "w", stdout);
	#endif

	int a;
	scanf("%d", &a);
	int b;
	scanf("%d", &b);

	printf ("%d\n", a + b);
	
	return 0;
}
